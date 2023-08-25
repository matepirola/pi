/* Dado un número entero positivo, imprimir por salida estándar  el equivalente en base binaria. 
El rango de números a considerar puede estar acotado. (En no más de 15 líneas).*/
#include <stdio.h>
#include "../biblio/getnum.h"
int main (void)
{
    int numDec, b, c;
    numDec = getint("ingrese numero decimal: ");
    while (numDec > 0)
    {
        b = numDec % 2;
        if (b == 0)
        {
            c = b * 10; 
        }else if(b == 1)
        {
            c = (b * 10) + 1 ;
        }
        numDec /= 10;
    }
    printf("valor en binario: %d\n" , c);
    return 0; 
}


for(i = 0; ; i++)
{
    c = 1
    
        c *= 10;
    if( b == 1)
    {
        c =
    }
}