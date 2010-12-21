#ifndef __DEBUG_DVDSWITCH_H
#define __DEBUG_DVDSWITCH_H

#include <stdio.h>

#define DEBUG(a...) DebugLog.WriteLine(__FILE__, __LINE__, a)

class cDebugLog
{
  private:
    char *FileName;
    FILE *File;
    

    bool Open(void);
    void Close(void);
  public:
    cDebugLog(void);
    ~cDebugLog(void);

    bool SetLogFile(char *filename);
    void WriteLine(char *file, int line, char *format, ...);
    void End(void);
};

extern cDebugLog DebugLog;

#endif // __DEBUG_DVDSWITCH_H
