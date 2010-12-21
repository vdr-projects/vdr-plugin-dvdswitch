#ifndef __COMMANDS_DVDSWITCH_H
#define __COMMANDS_DVDSWITCH_H

#include <vdr/plugin.h>
#include "imagelist.h"
#include "menu.h"
#include "setup.h"
#include <stdlib.h>

enum eCMDs
{
  cmdNone,
  cmdDirManage,
  cmdDVDopen,
  cmdDVDclose,
  cmdImgPlay,
  cmdImgRename,
  cmdImgMove,
  cmdImgDelete,
  cmdImgBurn,
  cmdImgRead,
  cmdCommands
};

enum eCMDState
{
  csNone,
  csDirNew,
  csDirEdit,
  csDirMove,
  csDirDel
};


class cCMD
{
  public:
    static eOSState Play(cMainMenuItem *item = NULL);
    static eOSState Eject(bool close = false);
};


class cCMDMenu : public cOsdMenu
{
  private:
    cMainMenuItem *iItem;
    cMainMenu *OsdObject;
    cImageList &ImageList;
  public:
    cCMDMenu(cImageList &ImageList, cMainMenuItem *item, cMainMenu *osdobject);
    virtual eOSState ProcessKey(eKeys Key);
};

class cCMDDir : public cOsdMenu, private cDirHandlingOpt
{
  private:
    eCMDState State;
    char Dir[MaxFileName];
    cMainMenu *OsdObject;
    bool Select;
    char *Buffer;
    cImageList &ImageList;

    void Build(char *dir = NULL);
    void SetDir(char *value = NULL)
    {
      if(value)
        strn0cpy(Dir, value, MaxFileName);
      else
        strcpy(Dir, "\0");
    }

    eOSState New(void);
    eOSState New(eKeys Key);
    eOSState Edit(cMainMenuItem *mItem);
    eOSState Edit(eKeys Key);
  public:
    cCMDDir(cImageList &ImageList, cMainMenu *osdobject = NULL, bool select = false, char *buffer = NULL);

    virtual eOSState ProcessKey(eKeys Key);
    void SetHelp(void);
};

class cCMDMove : public cOsdMenu, private cDirHandlingOpt
{
  private:
    char *File;
    cMainMenu *OsdObject;
    bool Dir;
    bool Direct;
    cImageList &ImageList;

    void Build(char *dir = NULL);
  public:
    cCMDMove(cImageList &ImageList, const char *file, cMainMenu *osdobject, bool dir = true, bool direct = false);
    ~cCMDMove(void) { free(File); }

    virtual eOSState ProcessKey(eKeys Key);
    void SetHelp(void);
};

class cCMDImage
{
  private:
    char *File;
    cMainMenu *OsdObject;
  public:
    char NewFile[MaxFileName];
    int tmpHideTypeCol;
    //int tmpHideImgSize

    cCMDImage(cMainMenu *osdobject = NULL);
    ~cCMDImage(void);

    char* Rename(const char *file = NULL);
    eOSState Delete(const char *file = NULL);
    eOSState Burn(const char *file);
};

class cCMDImageRead : public cOsdMenu
{
  private:
    char File[MaxFileName];
    char Dir[MaxFileName];
    char ImgTypeTxt[MaxFileName];
    int ImgType;
    cImageList &ImageList;

  public:
    cCMDImageRead(cImageList &ImageList);
    ~cCMDImageRead(void);

    void SetHelp(void);
    virtual eOSState ProcessKey(eKeys Key);
};

class cCMDImageReadThread : public cThread
{
  private:
    char *File;
    char *Dir;
    eFileInfo FileType;
  protected:
    virtual void Action(void)
    {
      dsyslog("ReadThread started");
      if(File && Dir && FileType != tNone)
      {
        dsyslog("ReadThread executed");
        char *cmd = NULL;
        char *output = NULL;
        char *mountpoint = NULL;
        int step = 0;
        cTokenizer *token = NULL;
        char buffer[MaxFileName];
        if(realpath(DVDSwitchSetup.DVDLinkOrg, buffer)) {
          while(!mountpoint && step < 2) {
            step++;
            if(0 < asprintf(&cmd,
                     "cat /etc/fstab | grep -e \"%s\" | grep -e \"^[^#]\"",
                     step == 1 ? DVDSwitchSetup.DVDLinkOrg : buffer)) {
              dsyslog("ReadThread call: %s", cmd);

              FILE *p = popen(cmd, "r");
              if(p)
              {
#if VDRVERSNUM >= 10318
                cReadLine rl;
                output = rl.Read(p);
#else
                output = readline(p);
#endif
                pclose(p);
              }
              token = new cTokenizer(output, " ");
              if(token->Count() > 1) {
                char* s = strdup(token->GetToken(2));
                mountpoint = stripspace(s);
              }
              DELETENULL(token);
            }
            FREENULL(cmd);
          }
          if(0 < asprintf(&cmd,
                    "'%s' '%s' '%s' '%s' '%s' '%s'",
                    DVDSwitchSetup.DVDReadScript,
                    Dir,
                    File,
                    buffer,
                    mountpoint,
                    (FileType == tFile) ? "IMAGE" : "DIR")) {
            dsyslog("ReadThread call: %s", cmd);
            int rc = system(cmd);
            dsyslog("ReadThread return value: %i", rc);
            FREENULL(cmd);
          }
          FREENULL(mountpoint);
        }
      }
      delete(this);
    };
  public:
    cCMDImageReadThread(char *file, char *dir, int imgtype, cImageList &ImageList)
    {
      dsyslog("ReadThread created");
      File = NULL;
      Dir = NULL;
      FileType = tNone;

      cImageListItem *item = ImageList.Get(imgtype);
      if(imgtype >= 0 && file && dir)
      {
        if(item->GetFType() == tFile) {
          if(0 >= asprintf(&File, "%s%s", file, item->GetValue()))
            return;
        }
        else
          File = strdup(file);
        Dir = strdup(dir);
        FileType = item->GetFType();
      }
    }
    ~cCMDImageReadThread(void)
    {
      free(File);
      free(Dir);
    }
};

class cCMDImageBurnThread : public cThread
{
  private:
    char *File;
    eFileInfo FileType;
  protected:
    virtual void Action(void)
    {
      dsyslog("BurnThread started");
      if(File && FileType != tNone)
      {
        dsyslog("BurnThread executed");
        char *cmd;
        if(0 < asprintf(&cmd,
                  "'%s' '%s' '%s'",
                  DVDSwitchSetup.DVDWriteScript,
                  File,
                  FileType == tFile ? "IMAGE" : "DIR")) {
          dsyslog("BurnThread call: %s", cmd);
          int rc = system(cmd);
          dsyslog("BurnThread return value: %i", rc);
          FREENULL(cmd);
        }
      }
      delete(this);
    };
  public:
    cCMDImageBurnThread(const char *file, eFileInfo type)
    {
      dsyslog("BurnThread created");
      File = NULL;
      FileType = tNone;

      if(file && type != tNone)
      {
        File = strdup(file);
        FileType = type;
      }
    }
    ~cCMDImageBurnThread(void) { free(File); }
};

#endif // __COMMANDS_DVDSWITCH_H
