# cterminal
Basic terminal function for Linux and Windows.

------------------------------------------

For a quickly overview see teste/example.c




Reference:

void t_setforeground(int color);

  it sets the foreground color.
  
color can be: tBlack, tBlue, tGreen, tCyan, tRed, tMagenta, tYellow, tGray, tLightGray, tLightBlue, tLightGreen, tLightCyan, tLightRed, tLightMagenta, tLightYellow, tWhite


void t_settitle(const char* title);

Sets title for terminal


void t_setdefault();

This function resets the colors to default.

void t_setbackground(int color);

Sets the background color of terminal (see color enum above)


void t_cls();

It cleans the screen of terminal


void t_gotoxy(int x, int y);

The cursor goes at the position x : y in the terminal.


int t_kbhit();

This function returns zero if key was pressed otherwise another value...


int t_getch();

It gets the char without RETURN / ENTER press, but do not puts it on terminal.


int t_getche();

It gets the char (without RETURN / ENTER press) and puts it on terminal.


void t_getsize(int *lines, int *cols);

Retrieves the size of terminal lines and cols, ex.:  int lines=0, cols=0; t_getsize(&lines, &cols); ...


/* for Linux only (yet)*/

char *t_readline(const char *str);

Returns a string prompt and wait for user input.

void t_add_history(const char *str); 

Adds a string *str into history for key up and key down...

/* END for Linux only (yet)*/



