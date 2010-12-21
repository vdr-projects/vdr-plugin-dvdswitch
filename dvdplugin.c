#include <vdr/remote.h>
#include <vdr/plugin.h>
#include <vdr/player.h>
#include <unistd.h>
#include "imagelist.h"
#include "dvdplugin.h"

cDVDPluginThread::cDVDPluginThread(char *image)
  :cThread("DVDPluginThread")
{
  dsyslog("Create new DVD Thread");
  Image = image ? strdup(image) : NULL;
}

cDVDPluginThread::~cDVDPluginThread(void)
{
  dsyslog("DVD Thread stopped");

  free(Image);
  Cancel();
}

void cDVDPluginThread::Action(void)
{
  dsyslog("DVD Thread started");
  if(Image)
    cDVDPlugin::ChangeLink(Image);

#if VDRVERSNUM < 10332
  cPlugin *plugin = cPluginManager::GetPlugin("dvd");

  if(plugin)
  {
    plugin->MainMenuAction();
    dsyslog("DVD MainMenuAction called");
  }
#else
  cRemote::CallPlugin("dvd");
  dsyslog("DVD Plugin called");
#endif

  cCondWait::SleepMs(2 * 1000);
  cControl *control = cControl::Control();
  dsyslog(control ? "DVD control found" : "DVD control not found");
  while(control)
  {
    cCondWait::SleepMs(5 * 1000);
    control = cControl::Control();
  }
  dsyslog("DVD control closed");

  if(Image)
    cDVDPlugin::ChangeLink(DVDSwitchSetup.DVDLinkOrg);

  dsyslog("DVD Thread closed");
  cDVDPlugin::Exit();
}

// --- cDVDPlugin ----------------------------------------------------------------

cDVDPluginThread *cDVDPlugin::thread = NULL;

void cDVDPlugin::DetectDevice(void)
{
  dsyslog("Scan nach DVD Device");
  char *cmd = NULL;
  char *output = NULL;
  char *dvd = NULL;

  if(0 < asprintf(&cmd, "ps -p %i -o cmd --no-header", getpid())) {
    dsyslog("Commando: %s", cmd);

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
          const char *p = strchr(token->GetToken(i + 1), '=');
          p++;
          dvd = strdup(p);
          break;
        }
      }
    }
    DELETENULL(token);
    
    if(dvd)
    {
      isyslog("Used DVD Device: %s", dvd);
      DVDSwitchSetup.SetDVDDevice(dvd);
      free(dvd);
    }
    else
    {
      isyslog("Use Default-DVD Device /dev/dvd");
      DVDSwitchSetup.SetDVDDevice("/dev/dvd");
    }
    
    free(cmd);
  }
}

void cDVDPlugin::SetLink(void)
{
  int argc = 2;
  char *argv[2] = { NULL, NULL };

  if(0 < asprintf(&argv[0], "%s", "dvd")) {
    if(0 < asprintf(&argv[1], "--dvd=%s", DVDSwitchSetup.DVDLink)) {

      cPlugin *plugin = cPluginManager::GetPlugin("dvd");

      if(plugin)
      {
        optind = 0; //reset for getopt
        plugin->ProcessArgs(argc, argv);
      }

      free(argv[1]);
    }
    free(argv[0]);
  }
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

    if(0 < asprintf(&cmd, LINK, target, DVDSwitchSetup.DVDLink)) {
      dsyslog("Change link: %s", cmd);
      rc = system(cmd);
      dsyslog("Change link got: %i", rc);
      free(cmd);
    }
  }
}
