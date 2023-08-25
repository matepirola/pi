#include <stdio.h>
int misterio2 ( const char *s);

int
main ( void )
{
	char string[80];
	printf ("Ingrese una cadena: ");
	scanf("%s", string);// sacnf no cuenta esapcios.
	printf("%d\n",misterio2(string));
	return 0;
}

int
misterio2 ( const char *s) // te dice la cantidad de caracteres que tiene la cadena.
{
	int x=0;
	for ( ;  *s != '\0'; s++)
		++x;
	return x;
}
