#include <stdio.h>

int
main(void)
{
	char letra;
	printf("\nIngrese una letra:");
	letra = getchar();
	if ( letra>='a' && letra <='z')
		printf("\n%c es una letra minúscula\n",letra);
	else
		if ( letra>='A' && letra<='Z')
			printf("\n%c es una letra mayúscula\n",letra);
	return 1;
}
// primero compile el ejecultable con -o ej10. me compila el ejecutable con ese nombre.
// no veo ninguna diferencia con compilarlo con -o ej10 | cat.
// me creo un archivo txt. 
// me linkedio y compilo todo sin ningun problema. 
// si no es una letra te tira un return 1 y da error. 