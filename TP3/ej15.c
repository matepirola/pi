  #include <stdio.h>
 #include "../biblio/getnum.h"
#include <math.h>
 int main(void)
 {
    int a, b, i, c = 0;
    a = getint("ingrese numro bimario: ");
    for (i=0;a > 0; i++)
    {
        b = a%10;
        c += (b * (pow(2,i)));
        a /= 10;
    }
    printf("numero en decimal: %d\n" , c);
    return 0;
 }
 