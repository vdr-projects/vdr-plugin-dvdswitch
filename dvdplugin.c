#include <vdr/remote.h>
#include <vdr/plugin.h>
#include <vdr/player.h>
#include <unistd.h>
#include "dvdplugin.h"
#include "debug.h"

cDVDPluginThread::cDVDPluginThread(char *image)
  :cThread("DVDPluginThread")
{
  DEBUG("Neuer DVD Thread angelegt");
  Image = image ? strdup(image) : NULL;
}

cDVDPluginThread::~cDVDPluginThread(void)
{
  DEBUG("DVD Thread beendet");

  free(Image);
  Cancel();
}

void cDVDPluginThread::Action(void)
{
  DEBUG("DVD Thread gestartet");
  if(Image)
    cDVDPlugin::ChangeLink(Image);

#if VDRVERSNUM < 10332
  cPlugin *plugin = cPluginManager::GetPlugin("dvd");

  if(plugin)
  {
    plugin->MainMenuAction();
    DEBUG("DVD MainMenuAction gestartet");
  }
#else
  cRemote::CallPlugin("dvd");
  DEBUG("DVD Plugin gestaret");
#endif

  cCondWait::SleepMs(2 * 1000);
  cControl *control = cControl::Control();
  DEBUG(control ? (char*)"Control gefunden" : (char*)"Control nicht gefunden");
  while(control)
  {
    cCondWait::SleepMs(5 * 1000);
    control = cControl::Control();
  }
  DEBUG("Control wurde geschlossen");

  if(Image)
    cDVDPlugin::ChangeLink(DVDSwitchSetup.DVDLinkOrg);

  DEBUG("Beende thread");
  cDVDPlugin::Exit();
}

// --- cDVDPlugin ----------------------------------------------------------------

cDVDPluginThread *cDVDPlugin::thread = NULL;

void cDVDPlugin::DetectDevice(void)
{
  DEBUG("Scan nach DVD Device");
  char *cmd = NULL;
  char *output = NULL;
  char *dvd = NULL;

  asprintf(&cmd, "ps -p %i -o cmd --no-header", getpid());
  DEBUG("Commando: %s", cmd);

  FILE *p = popen(cmd, "r");
  if(p)
  {
#if VDRVERSNUM >= 10318
    cReadLine rl;
    output = rl.Read(p);
#else
    output = readline(p);
#endif
    pclose(p);
  }

  cTokenizer *token = new cTokenizer(output, " ");
  for(int i = 1; i <= token->Count(); i++)
  {
    if(RegIMatch(token->GetToken(i), "^--plugin=dvd") ||
       (RegIMatch(token->GetToken(i - 1), "^-P$") &&
        RegIMatch(token->GetToken(i), "^dvd$")))
    {
      if(RegIMatch(token->GetToken(i + 1), "^-C$") &&
         token->GetToken(i + 2))
      {
        dvd = strdup(token->GetToken(i + 2));
        break;
      }
      if(RegIMatch(token->GetToken(i + 1), "^--dvd="))
      {
        char *p = strchr(token->GetToken(i + 1), '=');
        p++;
        dvd = strdup(p);
        break;
      }
    }
  }
  DELETENULL(token);
  
  if(dvd)
  {
    DEBUG("Erkanntes DVD Device: %s", dvd);
    DVDSwitchSetup.SetDVDDevice(dvd);
  }
  else
  {
    DEBUG("Nehme Standard-DVD Device");
    DVDSwitchSetup.SetDVDDevice("/dev/dvd");
  }

  free(cmd);
  free(dvd);
  //free(output);
}

void cDVDPlugin::SetLink(void)
{
  int argc = 2;
  char *argv[2] = { NULL, NULL };

  asprintf(&argv[0], "%s", "dvd");
  asprintf(&argv[1], "--dvd=%s", DVDSwitchSetup.DVDLink);

  cPlugin *plugin = cPluginManager::GetPlugin("dvd");

  if(plugin)
  {
    optind = 0; //reset for getopt
    plugin->ProcessArgs(argc, argv);
  }

  free(argv[0]);
  free(argv[1]);
}

void cDVDPlugin::Start(char *image)
{
  if(!thread)
  {
    thread = new cDVDPluginThread(image);
    thread->Start();
  }
}

void cDVDPlugin::Exit(void)
{
  if(thread)
    DELETENULL(thread);
}

void cDVDPlugin::ChangeLink(char *target)
{
  if(target)
  {
    char *cmd = NULL;
    int rc = 0;

    asprintf(&cmd, LINK, target, DVDSwitchSetup.DVDLink);
    DEBUG("Ändere link: %s", cmd);
    rc = system(cmd);
    DEBUG("Rückgabe Änderung: %i", rc);
    free(cmd);
  }
}
