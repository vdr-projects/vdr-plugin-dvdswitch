#include "setup.h"
#include "menu.h"
#include "i18n.h"
#include "dvdplugin.h"
#include "setup-itypes.h"

// --- cDVDSwitchSetup ------------------------------------------------

cDVDSwitchSetup DVDSwitchSetup;

cDVDSwitchSetup::cDVDSwitchSetup(void)
{
  HideMenuEntry = 0;
  strcpy(MenuName, "DVDSwitch");
  CustomMenuName = false;
  strcpy(ImageDir, "/video/dvd");
  ImageDirPerParam = false;
  ViewFreeDiskSpace = 1;

  DisplayMode = 0;
  CategorieType = 1;
  HideEmptyDirs = 1;
  SortMode = 1;
  DisplayDVDDevice = 0;

  HideTypeCol = 0;
  CountTypCol = 35;
  HideImgSizeCol = 0;
  asprintf(&CatLineChars, "%s", "-_.:#+*!%<>");
  CatLineChar = CatLineChars[0];
  CharCountBeforeCat = 3;
  SpacesBeforeAfterCat = 1;
  strcpy(SubCatCutter, ">");
  strcpy(ChangeCharsOSDName, "_ +&");

  JumpCatByKey = 0;

  k1 = 2;
  k2 = 3;
  k3 = 0;
  k4 = 0;
  k5 = 0;
  k6 = 0;
  k7 = 0;
  k8 = 5;
  k9 = 6;
  k0 = 1;
  kRed = 10;
  kGreen = 8;
  kYellow = 7;
  kBlue = 9;
  kOk = 4;

  DVDPluginExist = false;
  strcpy(DVDReadScript, "/usr/local/bin/dvdswitch_readdvd.sh");
  strcpy(DVDWriteScript, "/usr/local/bin/dvdswitch_writedvd.sh");
}

cDVDSwitchSetup::~ cDVDSwitchSetup(void)
{
}

void cDVDSwitchSetup::Init(void)
{
  if (!CustomMenuName)
    strcpy(MenuName, tr(MenuName));

  MaxDModes = 3;
  DModes[0] = tr("All Images");
  DModes[1] = tr("All with Cat.");
  DModes[2] = tr("Directories");

  MaxCTypes = 3;
  CTypes[0] = tr("Image-Type");
  CTypes[1] = tr("Directories");
  CTypes[2] = tr("File-Type");

  MaxSModes = 3;
  SModes[0] = tr("none");
  SModes[1] = tr("ascending");
  SModes[2] = tr("descending");

  MaxCommands = 11;
  Commands[0] = tr("none Function");
  Commands[1] = tr("Dir. Management");
  Commands[2] = tr("Tray open");
  Commands[3] = tr("Tray close");
  Commands[4] = tr("Play");
  Commands[5] = tr("Image rename");
  Commands[6] = tr("Image move");
  Commands[7] = tr("Image delete");
  Commands[8] = tr("Image burn");
  Commands[9] = tr("Image create");
  Commands[10] = tr("Commands");

  CommandsShortName[0] = NULL;
  CommandsShortName[1] = tr("Dir.Mgmt.");
  CommandsShortName[2] = tr("Open");
  CommandsShortName[3] = tr("Close");
  CommandsShortName[4] = tr("Play");
  CommandsShortName[5] = tr("Rename");
  CommandsShortName[6] = tr("Move");
  CommandsShortName[7] = tr("Delete");
  CommandsShortName[8] = tr("Burn");
  CommandsShortName[9] = tr("Create");
  CommandsShortName[10] = tr("Commands");

  Debug();
}

bool cDVDSwitchSetup::SetupParse(const char *Name, const char *Value)
{
  if (!strcasecmp(Name, "HideMenuEntry")) HideMenuEntry = atoi(Value);
  if (!strcasecmp(Name, "MenuName"))
  {
    strn0cpy(MenuName, Value, 50);
    CustomMenuName = true;
  }
  if (!strcasecmp(Name, "ImageDir") && !ImageDirPerParam) strn0cpy(ImageDir, Value, MaxFileName);
  if (!strcasecmp(Name, "ImageTypes")) ImageList.AddSetup((char*)Value);
  if (!strcasecmp(Name, "ViewFreeDiskSpace")) ViewFreeDiskSpace = atoi(Value);

  if (!strcasecmp(Name, "DisplayMode")) DisplayMode = atoi(Value);
  if (!strcasecmp(Name, "CategorieType")) CategorieType = atoi(Value);
  if (!strcasecmp(Name, "HideEmptyDirs")) HideEmptyDirs = atoi(Value);
  if (!strcasecmp(Name, "SortMode")) SortMode = atoi(Value);
  if (!strcasecmp(Name, "DisplayDVDDevice")) DisplayDVDDevice = atoi(Value);


  if (!strcasecmp(Name, "HideTypeCol")) HideTypeCol = atoi(Value);
  if (!strcasecmp(Name, "CountTypCol")) CountTypCol = atoi(Value);
  if (!strcasecmp(Name, "HideImgSizeCol")) HideImgSizeCol = atoi(Value);

  if (!strcasecmp(Name, "CatLineChar"))
  {
    CatLineChar = atoi(Value);
    if(!CatLineChar || !strchr(CatLineChars, CatLineChar))
      CatLineChar = CatLineChars[0];
  }
  if (!strcasecmp(Name, "CharCountBeforeCat")) CharCountBeforeCat = atoi(Value);
  if (!strcasecmp(Name, "SpacesBeforeAfterCat")) SpacesBeforeAfterCat = atoi(Value);
  if (!strcasecmp(Name, "SubCatCutter")) strn0cpy(SubCatCutter, Value, 7);
  if (!strcasecmp(Name, "ChangeCharsOSDName")) strn0cpy(ChangeCharsOSDName, Value, 20);

  if (!strcasecmp(Name, "JumpCatByKey")) JumpCatByKey = atoi(Value);

  if (!strcasecmp(Name, "k1"))      k1 = atoi(Value);
  if (!strcasecmp(Name, "k2"))      k2 = atoi(Value);
  if (!strcasecmp(Name, "k3"))      k3 = atoi(Value);
  if (!strcasecmp(Name, "k4"))      k4 = atoi(Value);
  if (!strcasecmp(Name, "k5"))      k5 = atoi(Value);
  if (!strcasecmp(Name, "k6"))      k6 = atoi(Value);
  if (!strcasecmp(Name, "k7"))      k7 = atoi(Value);
  if (!strcasecmp(Name, "k8"))      k8 = atoi(Value);
  if (!strcasecmp(Name, "k9"))      k9 = atoi(Value);
  if (!strcasecmp(Name, "k0"))      k0 = atoi(Value);
  if (!strcasecmp(Name, "kRed"))    kRed = atoi(Value);
  if (!strcasecmp(Name, "kGreen"))  kGreen = atoi(Value);
  if (!strcasecmp(Name, "kYellow")) kYellow = atoi(Value);
  if (!strcasecmp(Name, "kBlue"))   kBlue = atoi(Value);
  if (!strcasecmp(Name, "kOk"))     kOk = atoi(Value);

  return true;
}

void cDVDSwitchSetup::Debug(void)
{
  DEBUG("SetupParameter:");
  DEBUG("  HideMenuEntry: %i", HideMenuEntry);
  DEBUG("  MenuName: %s", MenuName);
  DEBUG("  ImageDir: %s", ImageDir);
  DEBUG("  ImageDirPerParam: %s", ImageDirPerParam ? "TRUE" : "FALSE");
  DEBUG("  ViewFreeDiskSpace: %s", ViewFreeDiskSpace ? "TRUE" : "FALSE");

  DEBUG("  DisplayMode: %i", DisplayMode);
  DEBUG("  CategorieType: %i", CategorieType);
  DEBUG("  HideEmptyDirs: %i", HideEmptyDirs);
  DEBUG("  SortMode: %i", SortMode);
  DEBUG("  DisplayDVDDevice: %s", DisplayDVDDevice ? "TRUE" : "FALSE");

  //DEBUG("  ISOFirst: %i", ISOFirst);
  DEBUG("  HideTypeCol: %i", HideTypeCol);
  DEBUG("  CountTypCol: %i", CountTypCol);
  DEBUG("  HideImgSizeCol: %i", HideImgSizeCol);
  DEBUG("  CatLineChar, %i", CatLineChar);
  DEBUG("  CharCountBeforeCat: %i", CharCountBeforeCat);
  DEBUG("  SpacesBeforeAfterCat: %i", SpacesBeforeAfterCat);
  DEBUG("  SubCatCutter: %s", SubCatCutter);
  DEBUG("  ChangeCharsOSDName: %s", ChangeCharsOSDName);

  DEBUG("  JumpCatByKey: %i", JumpCatByKey);

  DEBUG("  DVDLink: %s", DVDLink);
  DEBUG("  DVDLinkOrg: %s", DVDLinkOrg);
  DEBUG("  DVDReadScript: %s", DVDReadScript);
  DEBUG("  DVDWriteScript: %s", DVDWriteScript);

  DEBUG("  k1: %i", k1);
  DEBUG("  k2: %i", k2);
  DEBUG("  k3: %i", k3);
  DEBUG("  k4: %i", k4);
  DEBUG("  k5: %i", k5);
  DEBUG("  k6: %i", k6);
  DEBUG("  k7: %i", k7);
  DEBUG("  k8: %i", k8);
  DEBUG("  k9: %i", k9);
  DEBUG("  k0: %i", k0);
  DEBUG("  kRed: %i", kRed);
  DEBUG("  kGreen: %i", kGreen);
  DEBUG("  kYellow: %i", kYellow);
  DEBUG("  kBlue: %i", kBlue);
  DEBUG("  kOk: %i", kOk);
}

// --- cMenuSetupDVDSwitch -------------------------------------------

cMenuSetupDVDSwitch::cMenuSetupDVDSwitch(void)
{
  data = DVDSwitchSetup;

  ViewGeneric = false;
  ViewGenericPos = -1;
  ViewDisplay = false;
  ViewDisplayPos = -1;
  ViewSpecialDisplay = false;
  ViewSpecialDisplayPos = -1;
  ViewNav = false;
  ViewNavPos = -1;
  ViewKey = false;
  ViewKeyPos = -1;

  SetCols(2,30);
  Set();
}

void cMenuSetupDVDSwitch::Set(void)
{
  int current = Current();
  cOsdItem *item = NULL;

  Clear();

  Add(new cMenuEditCatItem(tr("Generic Settings"), ViewGeneric));
  ViewGenericPos = Count() - 1;
  if(ViewGeneric)
  {
    Add(new cMenuEditBoolItem(tr("\tHide Mainmenu Entry"), &data.HideMenuEntry));
    if (!data.HideMenuEntry)
      Add(new cMenuEditStrItem(tr("\t  Name"),
          data.MenuName,
          50,
          tr(" abcdefghijklmnopqrstuvwxyz0123456789-.#~")));
    if(!data.ImageDirPerParam)
      Add(new cMenuEditStrItem(tr("\tImage Dir."),
          data.ImageDir,
          MaxFileName,
          "abcdefghijklmnopqrstuvwxyz0123456789-.#~/"));
    Add(new cOsdItem(tr("\tImagetypes")));
    Add(new cMenuEditBoolItem(tr("\tView free DiskSpace"), &data.ViewFreeDiskSpace));
    Add(new cOsdItem("------------------------------------------------------------------------------------------"));
    item = Last();
    item->SetSelectable(false);
  }

  Add(new cMenuEditCatItem(tr("Display Settings"), ViewDisplay));
  ViewDisplayPos = Count() - 1;
  if(ViewDisplay)
  {
    Add(new cMenuEditStraItem(tr("\tDisplay Mode"), &data.DisplayMode, data.MaxDModes, data.DModes));
    if(data.DisplayMode == 1)
      Add(new cMenuEditStraItem(tr("\t  Category Type"), &data.CategorieType, data.MaxCTypes, data.CTypes));
    if(data.DisplayMode > 0)
      Add(new cMenuEditBoolItem(tr("\t  invisible empty Dir's/Cat."), &data.HideEmptyDirs));
    Add(new cMenuEditStraItem(tr("\tAlphabetic Sort"), &data.SortMode, data.MaxSModes, data.SModes));
    Add(new cMenuEditBoolItem(tr("\tvisible DVD-Drive"), &data.DisplayDVDDevice));
    Add(new cOsdItem("------------------------------------------------------------------------------------------"));
    item = Last();
    item->SetSelectable(false);
  }

  Add(new cMenuEditCatItem(tr("Special Display Settings"), ViewSpecialDisplay));
  ViewSpecialDisplayPos = Count() - 1;
  if(ViewSpecialDisplay)
  {
    Add(new cMenuEditBoolItem(tr("\tvisible Image-Type Col"), &data.HideTypeCol));
    if(data.HideTypeCol)
      Add(new cMenuEditIntItem(tr("\t  Width for Image-Col"), &data.CountTypCol, 10, 50));
    Add(new cMenuEditBoolItem(tr("\tvisible Image-Size Col"), &data.HideImgSizeCol));
    Add(new cMenuEditStrItem(tr("\tchange Character"),
        data.ChangeCharsOSDName,
        20,
        " abcdefghijklmnopqrstuvwxyz0123456789-_+*&.#~%$"));
    if(data.DisplayMode == 1)
    {
      //if(data.CategorieType == 0)
      //  Add(new cMenuEditBoolItem(tr("\tISO Images first"), &data.ISOFirst));
      Add(new cMenuEditChrItem(tr("\tchar for Cat.Line"),
          &data.CatLineChar,
          data.CatLineChars));
      Add(new cMenuEditIntItem(tr("\t  Count before Cat.Name"), &data.CharCountBeforeCat, 0, 30));
      Add(new cMenuEditBoolItem(tr("\tSpaces before/after Cat.Name"), &data.SpacesBeforeAfterCat));
      if(data.CategorieType == 1)
        Add(new cMenuEditStrItem(tr("\tCutText for Subcat"),
            data.SubCatCutter,
            6,
            "-_.:#+*!%<>"));
    }
    Add(new cOsdItem("------------------------------------------------------------------------------------------"));
    item = Last();
    item->SetSelectable(false);
  }

  if(data.DisplayMode == 1)
  {
    Add(new cMenuEditCatItem(tr("Navigation"), ViewNav));
    ViewNavPos = Count() - 1;
    if(ViewNav)
    {
      Add(new cMenuEditBoolItem(tr("\tCat.Jump by Left/Right"), &data.JumpCatByKey));
      Add(new cOsdItem("------------------------------------------------------------------------------------------"));
      item = Last();
      item->SetSelectable(false);
    }
  }

  Add(new cMenuEditCatItem(tr("Key allocation"), ViewKey));
  ViewKeyPos = Count() - 1;
  if(ViewKey)
  {
    Add(new cMenuEditStraItem(tr("\tKey 1"), &data.k1, data.MaxCommands, data.Commands));
    Add(new cMenuEditStraItem(tr("\tKey 2"), &data.k2, data.MaxCommands, data.Commands));
    Add(new cMenuEditStraItem(tr("\tKey 3"), &data.k3, data.MaxCommands, data.Commands));
    Add(new cMenuEditStraItem(tr("\tKey 4"), &data.k4, data.MaxCommands, data.Commands));
    Add(new cMenuEditStraItem(tr("\tKey 5"), &data.k5, data.MaxCommands, data.Commands));
    Add(new cMenuEditStraItem(tr("\tKey 6"), &data.k6, data.MaxCommands, data.Commands));
    Add(new cMenuEditStraItem(tr("\tKey 7"), &data.k7, data.MaxCommands, data.Commands));
    Add(new cMenuEditStraItem(tr("\tKey 8"), &data.k8, data.MaxCommands, data.Commands));
    Add(new cMenuEditStraItem(tr("\tKey 9"), &data.k9, data.MaxCommands, data.Commands));
    Add(new cMenuEditStraItem(tr("\tKey 0"), &data.k0, data.MaxCommands, data.Commands));
    Add(new cMenuEditStraItem(tr("\tKey Red"), &data.kRed, data.MaxCommands, data.Commands));
    Add(new cMenuEditStraItem(tr("\tKey Green"), &data.kGreen, data.MaxCommands, data.Commands));
    Add(new cMenuEditStraItem(tr("\tKey Yellow"), &data.kYellow, data.MaxCommands, data.Commands));
    Add(new cMenuEditStraItem(tr("\tKey Blue"), &data.kBlue, data.MaxCommands, data.Commands));
    Add(new cMenuEditStraItem(tr("\tKey OK"), &data.kOk, data.MaxCommands, data.Commands));
  }

  SetCurrent(Get(current));
  Display();
}

eOSState cMenuSetupDVDSwitch::ProcessKey(eKeys Key)
{
  eOSState state = osContinue;

  if(!HasSubMenu())
  {
    const char *ItemText = Get(Current())->Text();
    
    switch(Key)
    {
      case kRight:
      case kLeft:
        if(Current() == ViewGenericPos        ||
           Current() == ViewDisplayPos        ||
           Current() == ViewSpecialDisplayPos ||
           Current() == ViewNavPos            ||
           Current() == ViewKeyPos)
        {
          if(Current() == ViewGenericPos)
          {
            if((Key == kRight && !ViewGeneric) ||
               (Key == kLeft  && ViewGeneric))
              ViewGeneric = !ViewGeneric;
          }
          else if(Current() == ViewDisplayPos)
          {
            if((Key == kRight && !ViewDisplay) ||
               (Key == kLeft  && ViewDisplay))
              ViewDisplay = !ViewDisplay;
          }
          else if(Current() == ViewSpecialDisplayPos)
          {
            if((Key == kRight && !ViewSpecialDisplay) ||
               (Key == kLeft  && ViewSpecialDisplay))
              ViewSpecialDisplay = !ViewSpecialDisplay;
          }
          else if(Current() == ViewNavPos)
          {
            if((Key == kRight && !ViewNav) ||
               (Key == kLeft  && ViewNav))
              ViewNav = !ViewNav;
          }
          else if(Current() == ViewKeyPos)
          {
            if((Key == kRight && !ViewKey) ||
                (Key == kLeft  && ViewKey))
              ViewKey = !ViewKey;
          }
          Set();
          Display();
          return osContinue;
        }
        else
        {
          int tmpHideMenuEntry = data.HideMenuEntry;
          int tmpDisplayMode = data.DisplayMode;
          int tmpCategorieType = data.CategorieType;
          int tmpHideTypeCol = data.HideTypeCol;

          eOSState state = cMenuSetupPage::ProcessKey(Key);

          if (tmpHideMenuEntry != data.HideMenuEntry ||
              tmpDisplayMode   != data.DisplayMode   ||
              tmpCategorieType != data.CategorieType ||
              tmpHideTypeCol   != data.HideTypeCol)
          {
            Set();
            Display();
          }

          return state;
        }
        break;
      case kUp:
      case kUp|k_Repeat:
      case kDown:
      case kDown|k_Repeat:
        state = cMenuSetupPage::ProcessKey(Key);
        ItemText = Get(Current())->Text();
        
        if(strstr(ItemText, tr("\tImagetypes")) == ItemText)
          cOsdMenu::SetHelp(NULL, NULL, NULL, tr("to adjust"));
        else
          cOsdMenu::SetHelp(NULL, NULL, NULL, NULL);
        break;
      case kBlue:
        if(strstr(ItemText, tr("\tImagetypes")) == ItemText)
          return AddSubMenu(new cMenuSetupDSITypes());
        break;
      default:
        state = cMenuSetupPage::ProcessKey(Key);
        break;
    }
  }
  else
    state = cMenuSetupPage::ProcessKey(Key);

  return state;
}

void cMenuSetupDVDSwitch::Store(void)
{
  DEBUG("STORE Setup");

  DEBUG("SWITCH data");
  DVDSwitchSetup = data;

  SetupStore("HideMenuEntry",           DVDSwitchSetup.HideMenuEntry);
  SetupStore("MenuName",                DVDSwitchSetup.MenuName);
  if(!DVDSwitchSetup.ImageDirPerParam)
    SetupStore("ImageDir",              DVDSwitchSetup.ImageDir);
  SetupStore("ViewFreeDiskSpace",       DVDSwitchSetup.ViewFreeDiskSpace);

  SetupStore("DisplayMode",             DVDSwitchSetup.DisplayMode);
  SetupStore("CategorieType",           DVDSwitchSetup.CategorieType);
  SetupStore("HideEmptyDirs",           DVDSwitchSetup.HideEmptyDirs);
  SetupStore("SortMode",                DVDSwitchSetup.SortMode);
  SetupStore("DisplayDVDDevice",        DVDSwitchSetup.DisplayDVDDevice);

  SetupStore("HideTypeCol",             DVDSwitchSetup.HideTypeCol);
  SetupStore("CountTypCol",             DVDSwitchSetup.CountTypCol);
  SetupStore("HideImgSizeCol",          DVDSwitchSetup.HideImgSizeCol);
  SetupStore("CatLineChar",             DVDSwitchSetup.CatLineChar);
  SetupStore("CharCountBeforeCat",      DVDSwitchSetup.CharCountBeforeCat);
  SetupStore("SpacesBeforeAfterCat",    DVDSwitchSetup.SpacesBeforeAfterCat);
  SetupStore("SubCatCutter",            DVDSwitchSetup.SubCatCutter);
  SetupStore("ChangeCharsOSDName",      DVDSwitchSetup.ChangeCharsOSDName);

  SetupStore("JumpCatByKey",            DVDSwitchSetup.JumpCatByKey);

  SetupStore("k1",                      DVDSwitchSetup.k1);
  SetupStore("k2",                      DVDSwitchSetup.k2);
  SetupStore("k3",                      DVDSwitchSetup.k3);
  SetupStore("k4",                      DVDSwitchSetup.k4);
  SetupStore("k5",                      DVDSwitchSetup.k5);
  SetupStore("k6",                      DVDSwitchSetup.k6);
  SetupStore("k7",                      DVDSwitchSetup.k7);
  SetupStore("k8",                      DVDSwitchSetup.k8);
  SetupStore("k9",                      DVDSwitchSetup.k9);
  SetupStore("k0",                      DVDSwitchSetup.k0);
  SetupStore("kRed",                    DVDSwitchSetup.kRed);
  SetupStore("kGreen",                  DVDSwitchSetup.kGreen);
  SetupStore("kYellow",                 DVDSwitchSetup.kYellow);
  SetupStore("kBlue",                   DVDSwitchSetup.kBlue);
  SetupStore("kOk",                     DVDSwitchSetup.kOk);

  DVDSwitchSetup.Debug();
}

// --- cMenuEditCatItem ------------------------------------------------------

cMenuEditCatItem::cMenuEditCatItem(const char *name, bool view)
{
  Name = (char*) malloc(120);
  if(view)
    strcpy(Name, "-\t");
  else
    strcpy(Name, "+\t");
  strcat(Name, name);
  //strcat(Name, " ");
  //StrRepeat("_", (119 - strlen(Name)), Name);
  SetText(Name);
}

cMenuEditCatItem::~cMenuEditCatItem(void)
{
  free(Name);
}
