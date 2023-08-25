#include <stdio.h>

#define NRO 019 

int
main(void)
{
	long i = NRO ;
	printf("%ld\n",i);
	return 0;
}
/* me trira el errror error: invalid digit "9" in octal constant. el define esta definiendo NRO con un 0 
adelante que te dice que estas en el sistema octal, y como el 9 no pertenece a ese sistema te tira 
el error que el 9 no corresponde al sistema octal.*/