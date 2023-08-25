#include <stdio.h>
#include "../biblio/getnum.h"

int main (void)
{
    float a;
    a = getfloat("ingrese valor de la velocidad en m/s:") * 3.6;
    printf("%f\n" , a);
    return 0;
}