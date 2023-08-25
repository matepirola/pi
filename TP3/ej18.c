/*Escriba un programa que lea un entero no negativo ( cero o mayor ) y que calcule e imprima su factorial.
En caso de ingresar un valor inválido, imprimir un cartel aclarando cuáles son los valores válidos. 
(En no más de 10 líneas)*/
#include <stdio.h>
#include "../biblio/getnum.h"
int main (void)
{
    int  a, i, b = 1;
    a = getint("ingrese numero: ");
    if(a > 0)
    {
        for(i = 1; i <= a; i++)
        {
            b *= i;
        }
    } else if( a == 0)
    {
        b = 1;
    }
    printf("valor del factorial: %d\n" , b);
    return 0;
}