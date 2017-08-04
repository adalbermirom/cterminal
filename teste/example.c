/*simple test*/

#include <stdio.h>

#define _NO_READLINE //define no readline if you do not want to use lib readline. (linking is necessary if use it);
#include "../cterminal/terminal.h"

int main(int argc, char **argv)
{ 
	t_settitle("My test - cterminal"); //define o titulo
	t_setbackground(tWhite); //define cor de fundo branca.
	t_setforeground(tRed); //define cor da letra vermelha.
	puts("ola mundo");
	t_setdefault();//volta ao padrão.
	int c;
	while(c!='s'){
	c = t_getch();
	t_setbackground(tBlack);
	t_setforeground(tGreen);
	printf("\ngetch -> %c\n", c);
	t_setbackground(tBlack);
	t_setforeground(tYellow);
	c = t_getche();
	printf("\ngetche -> %c\n", c);
    }
    t_setdefault();f
	return 0;
}
