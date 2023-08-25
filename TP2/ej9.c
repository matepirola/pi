#include <stdio.h>
#include "../biblio/getnum.h"

int main(void)
{
    char a, b;     
    a = getint("ingresar el valor de a:");
    b = (a>>1);
    printf("%d\n" , b);
    return 0;
}