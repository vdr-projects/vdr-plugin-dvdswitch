/*
 * dvdswitch.c: A plugin for the Video Disk Recorder
 *
 * See the README file for copyright information and how to reach the author.
 *
 * $Id$
 */

#include <getopt.h>
#include <unistd.h>
#include <vdr/plugin.h>
#include "i18n.h"
#include "helpers.h"
#include "setup.h"
#include "menu.h"
#include "dvdplugin.h"
#include "imagelist.h"
//#include "dvdlist.h"

static const char *VERSION        = "0.1.0";
static const char *DESCRIPTION    = "allowed to play DVD-Images";
//static const char *MAINMENUENTRY  = "DVDSwitch";

class cPluginDvdswitch : public cPlugin {
private:
  // Add any member variables or functions you may need here.
  bool CheckError(void);
public:
  cPluginDvdswitch(void);
  virtual ~cPluginDvdswitch();
  virtual const char *Version(void) { return VERSION; }
  virtual const char *Description(void) { return tr(DESCRIPTION); }
  virtual const char *CommandLineHelp(void);
  virtual bool ProcessArgs(int argc, char *argv[]);
  virtual bool Initialize(void);
  virtual bool Start(void);
  virtual void Stop(void);
  virtual void Housekeeping(void);
  //virtual const char *MainMenuEntry(void) { return tr(MAINMENUENTRY); }
  virtual const char *MainMenuEntry(void) { return DVDSwitchSetup.MenuName; }
  virtual cOsdObject *MainMenuAction(void);
  virtual cMenuSetupPage *SetupMenu(void);
  virtual bool SetupParse(const char *Name, const char *Value);
  virtual bool Service(const char *Id, void *Data = NULL);
  virtual const char **SVDRPHelpPages(void);
  virtual cString SVDRPCommand(const char *Command, const char *Option, int &ReplyCode);
  };

cPluginDvdswitch::cPluginDvdswitch(void)
{
  // Initialize any member variables here.
  // DON'T DO ANYTHING ELSE THAT MAY HAVE SIDE EFFECTS, REQUIRE GLOBAL
  // VDR OBJECTS TO EXIST OR PRODUCE ANY OUTPUT!
}

cPluginDvdswitch::~cPluginDvdswitch()
{
  // Clean up after yourself!
  cDVDPlugin::Finish();
  DebugLog.End();
}

const char *cPluginDvdswitch::CommandLineHelp(void)
{
     //12345678901234567890123456789012345678901234567890123456789012345678901234567890|
  return
      "  -D LOGFILE,    --debug=LOGFILE       write Debug-Info's in LOGFILE\n"
      "  -r SCRIPT,     --readscript=SCRIPT   SCRIPT = scriptname with path for reading"
      "                                       DVD as a ISO Image File"
      "  -w SCRIPT,     --writescript=SCRIPT  SCRIPT = scriptname with path to writing"
      "                                       selected DVD Image"
      "  -i PATH,       --imagedir=PATH       Path to DVD-Images. This Option can set"
      "                                       in SetupMenu optional";
}

bool cPluginDvdswitch::ProcessArgs(int argc, char *argv[])
{
  static struct option long_options[] = {
    { "debug",        required_argument, NULL, 'D' },
    { "readscript",   required_argument, NULL, 'r' },
    { "writescript",  required_argument, NULL, 'w' },
    { "imagedir",     required_argument, NULL, 'i' },
    { NULL }
  };

  int c = 0;
  optind = 1; //default for getopt

  while((c = getopt_long(argc, argv, "D:r:w:", long_options, NULL)) != -1)
  {
    switch(c)
    {
      case 'D':
        DebugLog.SetLogFile(optarg);
        break;
      case 'r':
        strn0cpy(DVDSwitchSetup.DVDReadScript, optarg, MaxFileName);
        break;
      case 'w':
        strn0cpy(DVDSwitchSetup.DVDWriteScript, optarg, MaxFileName);
        break;
      case 'i':
        strn0cpy(DVDSwitchSetup.ImageDir, optarg, MaxFileName);
        DVDSwitchSetup.ImageDirPerParam = true;
        break;
      default:
        esyslog("DVDSwitch: unknown Parameter: %c", c);
        break;
    }
  }
  
  return true;
}

bool cPluginDvdswitch::Initialize(void)
{
  // Initialize any background activities the plugin shall perform.
  DEBUG("Plugin wird initialisiert");
  RegisterI18n(Phrases);

  DVDSwitchSetup.SetConfDir((char*)ConfigDirectory(Name()));
  cDVDPlugin::Init();
  ImageList.Init();
  DVDSwitchSetup.Init();

  return true;
}

bool cPluginDvdswitch::Start(void)
{
  // Start any background activities the plugin shall perform.
  return true;
}

void cPluginDvdswitch::Stop(void)
{
  // Stop any background activities the plugin shall perform.
}

void cPluginDvdswitch::Housekeeping(void)
{
  // Perform any cleanup or other regular tasks.
}

cOsdObject *cPluginDvdswitch::MainMenuAction(void)
{
  // Perform the action when selected from the main VDR menu.
  DEBUG("MainMenuAction");
  if (CheckError())
  {
    DEBUG("Fehler entdeckt. Keine OSDOBJECT Rueckgabe");
    return NULL;
  }
  else
    return new cMainMenu();
}

cMenuSetupPage *cPluginDvdswitch::SetupMenu(void)
{
  // Return a setup menu in case the plugin supports one.
  return new cMenuSetupDVDSwitch();
}

bool cPluginDvdswitch::SetupParse(const char *Name, const char *Value)
{
  // Parse your own setup parameters and store their values.
  return DVDSwitchSetup.SetupParse(Name, Value);
}

bool cPluginDvdswitch::Service(const char *Id, void *Data)
{
  // Handle custom service requests from other plugins
  return false;
}

const char **cPluginDvdswitch::SVDRPHelpPages(void)
{
  // Return help text for SVDRP commands this plugin implements
  return NULL;
}

cString cPluginDvdswitch::SVDRPCommand(const char *Command, const char *Option, int &ReplyCode)
{
  // Process SVDRP commands this plugin implements
  return NULL;
}

bool cPluginDvdswitch::CheckError(void)
{
  DEBUG("Fehlercheck");
  DEBUG("Check ImageDir");
  if(!DirectoryOk(DVDSwitchSetup.ImageDir))
  {
    DEBUG("ImageDir '%s' ist nicht lesbar oder existiert nicht", DVDSwitchSetup.ImageDir);
    OSD_ERRMSG(tr("Image Directory not readable or not exist"));
    return true;
  }

  DEBUG("Check DVD Plugin");
  if(!cPluginManager::GetPlugin("dvd"))
  {
    DEBUG("DVDPlugin wurde nicht gefunden!");
    OSD_INFOMSG(tr("DVD-Plugin not found! Function deactivated!"));
  } else
    DVDSwitchSetup.DVDPluginExist = true;

  return false;
}

VDRPLUGINCREATOR(cPluginDvdswitch); // Don't touch this!
