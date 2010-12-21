#include "dvdlist-item.h"
#include "helpers.h"

// --- cDVDListItem --------------------------------------------------------

cDVDListItem::cDVDListItem(char* file)
{
  DEBUG("Neues DVDItem -> %s", file);
  File = file ? strdup(file) : NULL;
}

cDVDListItem::~ cDVDListItem(void)
{
  free(File);
}
