#include "imagelist.h"

//cImageList ImageList;

cImageList::cImageList(void)
{
  Setup = false;
}

cImageList::~ cImageList(void)
{
}

void cImageList::Init(void)
{
  dsyslog("Init ImageList");
  if(!Setup)
  {
    Add(new cImageListItem(tr("Directory with 'VIDEO_TS' Folder"),
                           tr("Directory"),
                           tDir,
                           "video_ts",
                           true));
    Add(new cImageListItem(tr("File with '.iso' Extension"),
                           tr("Iso-Image"),
                           tFile,
                           ".iso",
                           true));
  }
}

void cImageList::AddItem(const char *item)
{
  dsyslog("Neues Item soll hinzugefügt werden: %s", item);

  if (!isempty(item))
  {
    cTokenizer *token = new cTokenizer(item, "|");
    if(token->Count() == 5)
      Add(new cImageListItem(token->GetToken(1),
                             token->GetToken(2),
                             (eFileInfo)atoi(token->GetToken(3)),
                             token->GetToken(4),
                             atoi(token->GetToken(5))));
    delete(token);
  }
}

void cImageList::AddSetup(const char *value)
{
  dsyslog("Erhalte SetupString: %s",value);

  Setup = true;
  Clear();

  if(!isempty(value))
  {
    cTokenizer *token = new cTokenizer(value, "@");
    for(int i = 1; i <= token->Count(); i++)
      AddItem(token->GetToken(i));
    DELETENULL(token);
  }
}

char *cImageList::GetSetupString(void)
{
  dsyslog("Erstelle SetupString");

  SString = NULL;
  cImageListItem *item = First();

  while(item)
  {
    dsyslog("Füge hinzu: %s", item->SaveString());
    SString += item->SaveString();
    SString += "@";
    item = Next(item);
  }

  return &SString;
}

char *cImageList::GetExtensions(void)
{
  dsyslog("Erstelle Liste aller Extensions");

  Ext = NULL;
  cImageListItem *item = First();

  while(item)
  {
    dsyslog("Item ist vom Type: %i", (int) item->GetFType());
    if(item->GetFType() == tFile)
    {
      dsyslog("Item wird hinzugefügt: %s", item->GetValue());
      Ext += item->GetValue();
      Ext += "@";
    }
    item = Next(item);
  }

  return stripspace(&Ext);
}

char *cImageList::GetHideExtensions(void)
{
  dsyslog("Erstelle Liste aller Extensions die ausgeblendet werden sollen");

  HideExt = NULL;
  cImageListItem *item = First();

  while(item)
  {
    dsyslog("Item ist vom Type: %i", (int) item->GetFType());
    if(item->GetFType() == tFile && item->IsHide())
    {
      dsyslog("Item wird hinzugefügt: %s", item->GetValue());
      HideExt += item->GetValue();
      HideExt += "@";
    }
    item = Next(item);
  }

  return stripspace(&HideExt);
}

char *cImageList::GetDirContains(void)
{
  dsyslog("Erstelle Liste aller Verzeichnisinhalte");

  DirIn = NULL;
  cImageListItem *item = First();

  while(item)
  {
    dsyslog("Item ist vom Type: %i", (int) item->GetFType());
    if(item->GetFType() == tDir)
    {
      dsyslog("Item wird hinzugefügt: %s", item->GetValue());
      DirIn += item->GetValue();
      DirIn += "@";
    }
    item = Next(item);
  }

  return stripspace(&DirIn);
}

char *cImageList::GetShortName(const char *file)
{
  dsyslog("Shortname wird gesucht: %s", file);

  Short = NULL;
  cImageListItem *item = First();
  cFileInfo *info = new cFileInfo(file);

  switch(info->Type())
  {
    case tDir:
      while(item)
      {
        if(item->GetFType() == tDir &&
           cFileList::DirIsIn(file, item->GetValue()))
          break;
        item = Next(item);
      }
      if(item)
        Short = item->GetSName();
      break;
    case tFile:
      while(item)
      {
        if(item->GetFType() == tFile &&
           !strcasecmp(item->GetValue(), info->Extension()))
          break;
        item = Next(item);
      }
      if(item)
        Short = item->GetSName();
      break;
    default:
      break;
  }

  return &Short;
}

bool cImageList::IsHide(const char *ext)
{
  if(!ext)
    return false;

  cImageListItem *item = First();
  while(item)
  {
    if(item->GetFType() == tFile &&
       item->IsHide() &&
       !strcasecmp(ext, item->GetValue()))
      return true;
    item = Next(item);
  }
  return false;
}
