/*
 * i18n.c: Internationalization
 *
 * See the README file for copyright information and how to reach the author.
 *
 * $Id: i18n.c 1.3 2002/06/23 13:05:59 kls Exp $
 */

#include "i18n.h"

const tI18nPhrase Phrases[] = {

  { "DVDSwitch",// eng,dos
    "DVDSwitch",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "allowed to play DVD-Images",// eng,dos
    "ermöglicht DVD-Images abzuspielen",//deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { " abcdefghijklmnopqrstuvwxyz0123456789-.#~",// eng,dos
    " abcdefghijklmnopqrstuvwxyz0123456789-.#~",//deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "Generic Settings",// eng,dos
    "Allgemeine Einstellungen",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "Display Settings",// eng,dos
    "Anzeige Einstellungen",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "Special Display Settings",// eng,dos
    "Detailierte Anzeige Einstellungen",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "Navigation",// eng,dos
    "Navigation",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "\tHide Mainmenu Entry",// eng,dos
    "\tVerstecke Hauptmenüeintrag",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "\t  Name",// eng,dos
    "\t  Name",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "\tImage Dir.",// eng,dos
    "\tImage Verz.",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "\tView free DiskSpace",// eng,dos
    "\tZeige freien Plattenplatz",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "\tImagetypes",// eng,dos
    "\tImagetypen",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "to adjust",// eng,dos
    "Einstellen",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "Imagetypes",// eng,dos
    "Imagetypen",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "Description:",// eng,dos
    "Beschreibung:",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "Type-Title:",// eng,dos
    "Typ-Bezeichnung:",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "Image Type",// eng,dos
    "Image Typ",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "Directory contains:",// eng,dos
    "Verzeichnis enthält:",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "File Extension:",// eng,dos
    "Datei-Erweiterung:",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "Hide Extension",// eng,dos
    "Erweiterung ausblenden",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "Directory with 'VIDEO_TS' Folder",// eng,dos
    "Verzeichnis mit 'VIDEO_TS' Ordner",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "File with '.iso' Extension",// eng,dos
    "Datei mit '.iso' Extension",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "Iso-Image",// eng,dos
    "Iso-Image",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "Directory",// eng,dos
    "Verzeichnis",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "File",// eng,dos
    "Datei",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "\tDisplay Mode",// eng,dos
    "\tAnzeige Modus",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "All Images",// eng,dos
    "Alle Images",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "All with Cat.",// eng,dos
    "Alle mit Kat.",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "Directories",// eng,dos
    "Verzeichnisse",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "\t  Category Type",// eng,dos
    "\t  Art der Kategorie",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "Image-Type",// eng,dos
    "Image-Typ",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "Directories",// eng,dos
    "Verzeichnisse",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "File-Type",// eng,dos
    "Datei-Typ",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "Image-File",// eng,dos
    "Image-Datei",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "Image-Directory",// eng,dos
    "Image-Verzeichnis",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },

  { "\t  invisible empty Dir's/Cat.",// eng,dos
    "\t  Blende leere Verz./Kat. aus",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "\tAlphabetic Sort",// eng,dos
    "\talphabetische Sortierung",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "none",// eng,dos
    "Keine",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "ascending",// eng,dos
    "Aufsteigend",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "descending",// eng,dos
    "Absteigend",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "\tvisible DVD-Drive",// eng,dos
    "\tDVD-LW einblenden",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "\tISO Images first",// eng,dos
    "\tISO Images zuerst",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "\tinvisible Extension",// eng,dos
    "\tBlende Erweiterung aus",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "\tisible Image-Type Col",// eng,dos
    "\tZeige Image-Typ Spalte",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "\t  Width for Image-Col",// eng,dos
    "\t  Breite für Image-Spalte",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "\tchar for Cat.Line",// eng,dos
    "\tZeichen für Kat.Linie",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "\t  Count before Cat.Name",// eng,dos
    "\t  Anzahl vorm Kat.Namen",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "\tSpaces before/after Cat.Name",// eng,dos
    "\tLeerzeichen vor/nach Kat.Name",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "\tCutText for Subcat",// eng,dos
    "\tTrenntext für Subkat.",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "\tchange Character",// eng,dos
    "\tZeichen ändern",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "\tCat.Jump by Left/Right",// eng,dos
    "\tKat.sprung bei Links/Rechts",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "without Catergory",// eng,dos
    "ohne Kategorie",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "DVD-Drive",// eng,dos
    "DVD-Laufwerk",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "Image Directory not readable or not exist",// eng,dos
    "Image Verzeichnis ist nicht lesbar oder existiert nicht",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "DVD-Plugin not found! Function deactivated!",// eng,dos
    "DVD Plugin nicht gefunden! Funktion deaktiviert!",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "No Writescript specified",// eng,dos
    "Es wurde kein Writescript angegeben",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "Specified Writescript not exist!",// eng,dos
    "Angegebenes Writescript existiert nicht!",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "Cannot execute Writescript!",// eng,dos
    "Kann Writescript nicht ausführen!",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "No Readscript specified",// eng,dos
    "Es wurde kein Readscript angegeben",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "Specified Readscript not exist!",// eng,dos
    "Angegebenes Readscript existiert nicht!",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "Cannot execute Readscript!",// eng,dos
    "Kann Readscript nicht ausführen!",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "invalid file name for DVD-Image",// eng,dos
    "ungültiger Dateiname für das DVD-Image",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "'Description' must not empty!",// eng,dos
    "'Beschreibung' darf nicht leer sein!",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "'Type-Title' must not empty!",// eng,dos
    "'Typ Bezeichnung' darf nicht leer sein!",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "'Directory contains' must not empty!",// eng,dos
    "'Verzeichnis enthält' darf nicht leer sein!",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "'File Extension' must not empty!",// eng,dos
    "'Datei Erweiterung' darf nicht leer sein!",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "really delete Entry?",// eng,dos
    "Eintrag wirklich löschen?",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "really delete DVD?",// eng,dos
    "DVD wirklich löschen?",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "to change",// eng,dos
    "Wechseln",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "Play",// eng,dos
    "Wiedergabe",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "Read DVD",// eng,dos
    "Lies DVD",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "Write DVD",// eng,dos
    "Schreibe DVD",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "Read DVD",// eng,dos
    "Lies DVD",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "Imagename:",// eng,dos
    "Image-Name:",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "Imagetype:",// eng,dos
    "Image-Typ:",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "read in",// eng,dos
    "Einlesen",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "no Rights to move",// eng,dos
    "keine Berechtigung zum Verschieben",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "no Rights to delete",// eng,dos
    "keine Berechtigung zum Löschen",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "no Rights to write",// eng,dos
    "keine Berechtigung zum Schreiben",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "no Rights to create",// eng,dos
    "keine Berechtigung zum Erstellen",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "no Rights to rename",// eng,dos
    "keine Berechtigung zum schreiben",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "no Rights!",// eng,dos
    "keine Berechtigung!",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "really delete?",// eng,dos
    "Wirklich löschen?",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "Directory not empty. however delete?",// eng,dos
    "Verzeichnis ist nicht leer. Dennoch löschen?",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "Commands",// eng,dos
    "Befehle",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "Directory Management",// eng,dos
    "Verzeichnis Management",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "DVD-Tray open",// eng,dos
    "DVD Schublade öffnen",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "DVD-Tray close",// eng,dos
    "DVD Schublade schließen",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "Image rename",// eng,dos
    "Image umbenennen",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "Image move",// eng,dos
    "Image verschieben",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "Image delete",// eng,dos
    "Image löschen",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "Image burn",// eng,dos
    "Image brennen",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "Image to create from DVD",// eng,dos
    "Image von DVD erstellen",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "Select",// eng,dos
    "Auswählen",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "Rename",// eng,dos
    "Umbenennen",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "Move",// eng,dos
    "Verschieben",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "Edit Directories",// eng,dos
    "Verzeichnisse bearbeiten",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "New:",// eng,dos
    "Neu:",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "Directory exists",// eng,dos
    "Verzeichnis existiert bereits",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "Rename:",// eng,dos
    "Umbenenen:",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "Burn Now?",// eng,dos
    "Jetzt brennen?",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "Name:",// eng,dos
    "Name:",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "Directory:",// eng,dos
    "Verzeichnis:",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "Imagetype:",// eng,dos
    "ImageTyp:",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "No Imagetype selected",// eng,dos
    "Es wurde kein Imagetyp ausgewählt!",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "No Directory selected. Use Standard?",// eng,dos
    "Es wurde kein Verzeichnis ausgewählt. Standard benutzen?",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "Now Read?",// eng,dos
    "Jetzt einlesen?",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "Select Directory",// eng,dos
    "Verzeichnis auswählen",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "File exists in Directory",// eng,dos
    "Datei existiert bereits im Verzeichnis",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "none Function",// eng,dos
    "keine Funktion",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "Dir. Management",// eng,dos
    "Verz. Management",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "Tray open",// eng,dos
    "DVD öffnen",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "Tray close",// eng,dos
    "DVD schließen",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "Image create",// eng,dos
    "Image erstellen",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "Dir.Mgmt.",// eng,dos
    "Verz.Mgmt.",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "Close",// eng,dos
    "Schließen",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "Burn",// eng,dos
    "Brennen",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "Create",// eng,dos
    "Erstellen",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "Key allocation",// eng,dos
    "Tastenbelegung",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "\tKey 1",// eng,dos
    "\tTaste 1",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "\tKey 2",// eng,dos
    "\tTaste 2",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "\tKey 3",// eng,dos
    "\tTaste 3",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "\tKey 4",// eng,dos
    "\tTaste 4",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "\tKey 5",// eng,dos
    "\tTaste 5",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "\tKey 6",// eng,dos
    "\tTaste 6",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "\tKey 7",// eng,dos
    "\tTaste 7",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "\tKey 8",// eng,dos
    "\tTaste 8",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "\tKey 9",// eng,dos
    "\tTaste 9",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "\tKey 0",// eng,dos
    "\tTaste 0",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "\tKey Red",// eng,dos
    "\tTaste Rot",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "\tKey Yellow",// eng,dos
    "\tTaste Gelb",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "\tKey Green",// eng,dos
    "\tTaste Grün",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "\tKey Blue",// eng,dos
    "\tTaste Blau",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "\tKey OK",// eng,dos
    "\tTaste OK",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "\tvisible Image-Size Col",// eng,dos
    "\tZeige Spalte Image Größe",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "\tvisible Image-Type Col",// eng,dos
    "\tZeige Spalte Image-Typ",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "Insert",// eng,dos
    "Einfügen",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "New",// eng,dos
    "Neu",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { "Delete",// eng,dos
    "Löschen",// deu,ger
    "",// slv,slo
    "",// ita
    "",// dut,nla,nld
    "",// por
    "",// fra,fre
    "",// nor
    "",// fin,smi
    "",// pol
    "",// esl,spa
    "",// ell,gre
    "",// sve,swe
    "",// rom,rum
    "",// hun
    "",// cat,cln
    "",// rus
    "",// hrv
    "",// est
    "",// dan
#if VDRVERSNUM >= 10342
    "",// cze,ces
#endif
  },
  { NULL }
  };
