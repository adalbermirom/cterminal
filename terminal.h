/*Lib terminal.h for Windows and Linux*/
/*Adalberto Amorim Felipe -- License MIT*/

/*use #define _NO_READLINE to not use libreadline (it needs install and links -lreadline)*/

#if defined (_WIN32) || defined (_WIN64) || defined(WIN32)
  #define __win
#endif

#ifdef __win  //both win32 and win64
  #include "terminalwin.h"
#else 
  #include "terminallinux.h"
#endif

