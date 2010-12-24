
#include <vdr/plugin.h>
#include <vdr/player.h>
#include <unistd.h>
#include "imagelist.h"
#include "dvdplugin.h"

cDVDPluginThread::cDVDPluginThread(char *image)
  :cThread("DVDPluginThread")
{
  dsyslog("dvdswitch: Create new DVD Thread");
  Image = image ? strdup(image) : NULL;
}

cDVDPluginThread::~cDVDPluginThread(void)
{
  dsyslog("dvdswitch: DVD Thread stopped");

  free(Image);
  Cancel();
}

void cDVDPluginThread::Action(void)
{
  dsyslog("dvdswitch: DVD Thread started");
  if(Image)
    cDVDPlugin::ChangeLink(Image);

#if VDRVERSNUM < 10332
  cPlugin *plugin = cPluginManager::GetPlugin("dvd");

  if(plugin)
  {
    plugin->MainMenuAction();
    dsyslog("dvdswitch: DVD MainMenuAction called");
  }
#else
  cRemote::CallPlugin("dvd");
  dsyslog("dvdswitch: DVD Plugin called");
#endif

  cCondWait::SleepMs(2 * 1000);
  cControl *control = cControl::Control();
  dsyslog(control ? "DVD control found" : "DVD control not found");
  while(control)
  {
    cCondWait::SleepMs(5 * 1000);
    control = cControl::Control();
  }
  dsyslog("dvdswitch: DVD control closed");

  if(Image)
    cDVDPlugin::ChangeLink(DVDSwitchSetup.DVDLinkOrg);

  dsyslog("dvdswitch: DVD Thread closed");
  cDVDPlugin::Exit();
}

// --- cDVDPlugin ----------------------------------------------------------------

cDVDPluginThread *cDVDPlugin::thread = NULL;

void cDVDPlugin::DetectDevice(void)
{
  dsyslog("dvdswitch: parse cmdline of dvd-plugin for DVD Device");
  char *file = NULL;
  char *dvd = NULL;

  if(0 < asprintf(&file, "/proc/%i/cmdline", getpid())) {
    /* read /proc/`pidof vdr`/cmdline */
    char buffer[1024];
    int len = -1;

    int fd = open(file,O_RDONLY);
    if (fd >= 0) {
      do {
          len = read(fd,buffer,sizeof(buffer)); }
      while (len == -1 && errno == EINTR);
      close(fd);
    } else {
      char* szErr = get_strerror(errno);
      esyslog("dvdswitch: could not open %s:%s", file, szErr ? szErr : "");
      if(szErr) free(szErr);
    }
    free(file);

    if (len < 0) {
      char* szErr = get_strerror(errno);
      esyslog("dvdswitch: could not read %s:%s", file, szErr ? szErr : "");
      if(szErr) free(szErr);
    } else {
      char *output = NULL;
      for(int n = 0; n < len && !dvd;n += (strlen(output) + 1)) {
        output = buffer + n;
        //dsyslog("dvdswitch: parse '%s'", output);
        if(0 == strncmp(output, "--plugin=dvd ",13)
            || 0 == strncmp(output, "-Pdvd ",6)
            || 0 == strncmp(output, "-P dvd ",7)
            || 0 == strncmp(output, "-P'dvd ",7)
            || 0 == strncmp(output, "-P\"dvd ",7)) {

        cTokenizer *token = new cTokenizer(output, " ");
        for(int i = 0; i <= token->Count(); i++) {
            if(RegIMatch(token->GetToken(i), "^-C$") &&
               token->GetToken(i + 1)) {
              dvd = strdup(token->GetToken(i + 1));
              break;
            }
            if(RegIMatch(token->GetToken(i), "^--dvd=")) {
              const char *p = strchr(token->GetToken(i), '=');
              dvd = strdup(p + 1);
              break;
            }
          }
          DELETENULL(token);
        }
      }
    }
    if(!dvd) {
      dvd = strdup("/dev/dvd");
    }
    if(dvd) {
      isyslog("dvdswitch: use DVD Device: %s", dvd);
      DVDSwitchSetup.SetDVDDevice(dvd);
      free(dvd);
    }
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
    isyslog("dvdswitch: create link %s to %s", DVDSwitchSetup.DVDLink, target);
    
    if(-1 == unlink(DVDSwitchSetup.DVDLink) && errno != ENOENT) {
      char* szErr = get_strerror(errno);
      esyslog("dvdswitch: could not remove symbolic link %s : %s (%d)", DVDSwitchSetup.DVDLink, szErr ? szErr : "", errno);
      if(szErr) free(szErr);
    }
    if(-1 == symlink(target, DVDSwitchSetup.DVDLink)) {
      char* szErr = get_strerror(errno);
      esyslog("dvdswitch: could not create link %s to %s :%s (%d)", DVDSwitchSetup.DVDLink, target, szErr ? szErr : "", errno);
      if(szErr) free(szErr);
    }
  }
}
