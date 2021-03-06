#ifndef __SETUP_EXTENSIONS_DVDSWITCH_H
#define __SETUP_EXTENSIONS_DVDSWITCH_H

#include <vdr/menuitems.h>
#include "imagelist.h"

class cMenuSetupDSITypes : public cOsdMenu
{
  private:
    cSetupLine *SetupLine;
    cImageList &ImageList;
    bool Select;
    int *RetIndex;
    char *Buffer;
 
    void Set(void);
  public:
    cMenuSetupDSITypes(cImageList &ImageList, bool select = false, int* retindex = NULL, char *buffer = NULL);
    void SetHelp(void);
  protected:
    virtual eOSState ProcessKey(eKeys Key);
};

class cMenuSetupDSITypesItem : public cOsdMenu
{
  private:
    cImageListItem *Item;
    char LongName[50];
    char ShortName[20];
    int FileType;
    const char *FileTypes[2];
    char Extension[20];
    int HideExtension;
    cImageList &ImageList; 

    void Set(void);
  public:
    cMenuSetupDSITypesItem(cImageList &ImageList, int itemindex);
    virtual eOSState ProcessKey(eKeys Key);
};

#endif // __SETUP_EXTENSIONS_DVDSWITCH_H
