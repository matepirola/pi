#include <stdio.h>
#include "../biblio/getnum.h"
int main(void)
{
    int b, c;
    int a = getint("ingrese longitud del cuadrado: ");
    for(b = 1; b <= a ; b += 1)
    {
        printf("\n*");
        for(c=1; c<=a; c++)
        {
        printf("*");
        c++;
        }
    }
    return 0;
}