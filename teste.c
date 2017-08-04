#include <stdio.h>

#define _NO_READLINE //define no readline if you do not want to use lib readline. (linking is necessary if use it);
#include "../cterminal/terminal.h"

int main(int argc, char **argv)
{ 
	t_settitle("Meu teste em term"); //define o titulo
	t_setbackground(tWhite); //define cor de fundo branca.
	t_setforeground(tRed); //define cor da letra vermelha.
	puts("ola mundo");
	t_setdefault();//volta ao padrão.
	
	return 0;
}
