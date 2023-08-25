#include <stdio.h>
#include "../biblio/getnum.h"
int main(void)
{
    int b;
    int a = getint("ingrese numero que quiera: ");
    for (b=1; b <= a ; b++)
    {
        printf("%d\t%d\t%d\t%d\t \n" , b, b * 10, b * 100, b * 1000);
    }
    return 0;
}