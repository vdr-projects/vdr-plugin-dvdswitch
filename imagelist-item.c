#include "imagelist-item.h"

cImageListItem::cImageListItem(const char *lname, const char *sname, eFileInfo type, const char *value, bool hide)
{
  LName = NULL;
  SName = NULL;
  Value = 0;
  SString = NULL;

  Edit(lname, sname, type, value, hide);

  debug();
}

cImageListItem::~ cImageListItem(void)
{
  free(LName);
  free(SName);
  free(Value);
  free(SString);
}

void cImageListItem::Edit(const char *lname, const char *sname, eFileInfo type, const char *value, bool hide)
{
  dsyslog("New/Edit ImageListItem");
  debug();

  free(LName);
  free(SName);
  free(Value);

  LName = lname ? strdup(lname) : NULL;
  SName = sname ? strdup(sname) : NULL;

  if(type == tFile && value && value[0] != '.')
    asprintf(&Value, ".%s", value);
  else
    Value = value ? strdup(value) : NULL;

  fType = type;
  HideExt = hide;

  MakeSetupString();

  debug();
}

void cImageListItem::debug(void)
{
  dsyslog("Items:");
  dsyslog("  LongName: %s", LName);
  dsyslog("  ShortName: %s", SName);
  dsyslog("  FileType: %i", (int)fType);
  dsyslog("  Value: %s", Value);
  dsyslog("  Hide: %s", HideExt ? "TRUE" : "FALSE");
  dsyslog("  SaveString: %s", SString);
}
