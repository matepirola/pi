/*Escriba un
programa que lea de entrada estándar un número entero positivo
y calcule la cantidad de bits en ‘1’ que contiene.*/

#include <stdio.h>
#include "../biblio/getnum.h"
int main (void)
{
    int num = getint("ingrese numero: "), i, cont = 0;
    for(i = num; i > 0; i /= 2)
    {
        if( i % 2 == 1)
        {
            cont++;
        }
    }
    printf("cantidad de 1 es= %d\n" , cont);
}
