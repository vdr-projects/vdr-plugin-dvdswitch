#include <vdr/tools.h>
#include <vdr/i18n.h>
#include "dvdlist-item.h"
#include "helpers.h"

class cDVDList : public cList<cDVDListItem>
{
  private:
    char *DVDExts;
    char *DVDDirs;

    bool Load(char *dir, eFileList smode, bool sub);
  public:
    cDVDList(void)
    {
      DVDExts = NULL;
      DVDDirs = NULL;
    }
    ~cDVDList(void)
    {
      free(DVDExts);
      free(DVDDirs);
    }
    //bool Create(char *dir, DVDType dtype = dtAll, DLSortMode smode = dlAsc, bool subdirs = false);
    bool Create(char *dir, char *exts, char *dirs, eFileList smode = sNone, bool sub = false);
    
};

