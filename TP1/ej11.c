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
	return 0;
}

    // no existe el directorio #include "tp1_11.c". lo elimino para corregirlo.
    /*tira error en el return 0 y tiene sentido ya que de esta forma si no ponemos una letra no nos va a tirar
    ningun error. en cambio si ponemos return 1, no da la opcipn de no poner ninguna letra. PREGUNTAR*/
	// con ./ej11 < ej11.txt te ejecuta el programa con la primera letra del ej11.txt y te lo tira en la terminal.
	/* con ./ej11 < ej11.txt > out.txt te ejecuta el programa con la primera letra del ej11.txt y te lo tira
	la respuest en el archivo out.txt */