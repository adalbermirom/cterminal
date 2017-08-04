/*Lib terminal.h for Windows and Linux*/
/*Adalberto Amorim Felipe -- License MIT*/

/*use #define _NO_READLINE to not use libreadline (it needs install and links -lreadline)*/

#if defined (_WIN32) || defined (_WIN64) || defined(WIN32)
  #define __win
#endif


//it sets the foreground color.
//color can be: tBlack,tBlue,tGreen,tCyan,tRed,tMagenta,tYellow,
//tGray,tLightGray,tLightBlue,tLightGreen,tLightCyan,tLightRed,tLightMagenta,tLightYellow,tWhite
void t_setforeground(int color);

//set title for terminal
void t_settitle(const char* title);

//it reset the colors to default.
void t_setdefault();

//it sets the background color of terminal
void t_setbackground(int color);

//it cleans the screen of terminal
void t_cls();

//the cursor goes at the position x : y in the terminal.
void t_gotoxy(int x, int y);

//this function returns zero if key was pressed otherwise another value...
int t_kbhit();

//it gets the char without RETURN / ENTER press, but do not puts it on terminal.
int t_getch();

//it gets the char (without RETURN / ENTER press) and puts it on terminal.
int t_getche();

//it retrieves the size of terminal lines and cols, ex.:  int lines=0, cols=0; t_getsize(&lines, &cols); ...
void t_getsize(int*lines,int*cols);

/* for Linux only (yet)*/
char *t_readline(const char *str);//returns a string prompt and wait for user input...
void t_add_history(const char *str); //adds a string *str into history for key up and key down...
/* END for Linux only (yet)*/



#ifdef __win  //both win32 and win64
  #include "terminalwin.h"
#else 
  #include "terminallinux.h"
#endif

