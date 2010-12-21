#include "imagelist-item.h"

cImageListItem::cImageListItem(char *lname, char *sname, eFileInfo type, char *value, bool hide)
{
  LName = NULL;
  SName = NULL;
  Value = 0;
  SString = NULL;

  Edit(lname, sname, type, value, hide);

  Debug();
}

cImageListItem::~ cImageListItem(void)
{
  free(LName);
  free(SName);
  free(Value);
  free(SString);
}

void cImageListItem::Edit(char *lname, char *sname, eFileInfo type, char *value, bool hide)
{
  DEBUG("New/Edit ImageListItem");
  Debug();

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

  Debug();
}

void cImageListItem::Debug(void)
{
  DEBUG("Items:");
  DEBUG("  LongName: %s", LName);
  DEBUG("  ShortName: %s", SName);
  DEBUG("  FileType: %i", (int)fType);
  DEBUG("  Value: %s", Value);
  DEBUG("  Hide: %s", HideExt ? "TRUE" : "FALSE");
  DEBUG("  SaveString: %s", SString);
}
