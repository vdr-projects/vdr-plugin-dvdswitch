
#include "imagelist.h"
#include "menu.h"
#include "menu-item.h"
#include "setup.h"

// --- cMainMenuItem -----------------------------------------------------

cMainMenuItem::cMainMenuItem(eMainMenuItem itype, cImageList &ImageList, const char *file)
{
  dsyslog("Neues MainMenuItem: %i, %s", (int)itype, file);

  iType = itype;
  File = file ? strdup(file) : NULL;

  OSD = cMainMenu::CreateOSDName(iType, ImageList, File);

  SetText(OSD, true);
  if(iType == iCat)
    SetSelectable(false);

  dsyslog("OSDName: %s", OSD);
}

cMainMenuItem::~ cMainMenuItem()
{
  free(File);
  free(OSD);
}

