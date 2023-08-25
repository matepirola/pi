#include <stdio.h>
#define ENT_HORA 9
#define ENT_MINUTOS 0
int 
llegaTemprano (const int hora, const int minutos)
{
	return ((hora <= ENT_HORA || minutos <= ENT_MINUTOS)? 1 : 0); // yo usaria un || y preposicion simple.
}
int main (void)
{
    int hora = 7, minutos = 5;
    printf("%d\n", llegaTemprano(hora, minutos));
}