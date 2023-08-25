#include <stdio.h>
#include "../biblio/getnum.h"
#define swap(t,x,y) {t c = x; x = y; y = c; }
int main(void)
{
    float x = getfloat("ingrese valor de x: "), y = getfloat("ingrese valor de y: ");
    swap(float,x,y);
    printf("%f=x\n%f=y\n" , x, y);
    return 0;
}