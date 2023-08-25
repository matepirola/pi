#include <stdio.h>
#include "../biblio/getnum.h"
int main(void)
{
    int num, suma=0;
    num = getint("ingrese numero entero: "); 
    if (num < 0)
    {
        num *= -1;
    }
    while (num != 0)
    {
        suma += (num % 10);
        num /= 10;
    }
    printf("suma = %d\n" , suma);
    return 0;
}   
