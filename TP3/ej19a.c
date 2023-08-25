/*Repetir para el caso de ser un número real, indicando cuántos 5 tiene en su parte entera 
y cuántos en su parte decimal. 
(En no más de 10 líneas el primer caso, y no más de 25 el segundo caso).*/

#include <stdio.h> // dividir hasta quedarme con la parte decimal.
#include "../biblio/getnum.h"
int main (void)
{
    int num = getfloat("imgrese numero: "), cont = 0, c;
    if (num >= 0)
    {
    while(num > 10)
    {
        c = num / 10;
    }
    }
    else if(num < 10)
    {
        c = num;
    }
    while (c % 10 != 0)
    {
        if ( c % 10 == 5)
        {
            cont++;
        }
        c *= 10;
    }
    return 0;
}