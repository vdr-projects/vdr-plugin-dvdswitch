
#include "imagelist.h"
#include "tools.h"
#include "setup.h"

cDirList::cDirList(cImageList &ImageList)
{
  char *buffer = NULL;

  OptExclude("^lost\\+found$"); // lost+found Dir
  OptExclude("^\\."); // hidden Files
  OptExclude("\\.sdel$"); // del Files
  OptExclude("\\.smove$"); // move Files

  cTokenizer *token = new cTokenizer(ImageList.GetDirContains(), "@");
  for(int i = 1; i <= token->Count(); i++)
  {
    if(0 < asprintf(&buffer, "^%s$", token->GetToken(i))) {
      OptExclude(buffer);
      FREENULL(buffer);
    }
  }

  OptSort((eFileList)DVDSwitchSetup.SortMode);
  OptFilterType(tDir);

  delete(token);
}

