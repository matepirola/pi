#include <stdio.h>
#include "../biblio/getnum.h"
#include <math.h>
int main (void)
{
    int num = getint("imgrese numero: "), digit = 0, aux, c, i, invert = 0;
    for(c = num; c > 0; c /= 10, digit++);
    for(i = (digit - 1); i >= 0; i-- )
    {
        aux = num % 10;
        num /= 10;
        invert += aux * pow(10 , i);
    }
    if(invert == num)
    {
        printf("\nson capicua.");
    }
    else
    {
        printf("\nno son capicua.");
    }
    return 0;
}