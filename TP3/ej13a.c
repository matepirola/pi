#include <stdio.h>
#include "../biblio/getnum.h"
int main(void)
{
int b, c = 0 , a = getint("ingrese longitud del cuadrado: ");
for (b = 1; b <= a; b++)
{
printf("*");
if(b == a)
{
    printf("\n");
    b = 0;
    c++;
}
if (c == a)
{
    break;
}
}
return 0;
}