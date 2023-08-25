#include <stdio.h>
#define elapsed(a,b,c,d) ((((a*60)+b)-((c*60)+d) >= 0)? ((a*60)+b)-((c*60)+d) : ((a*60)+b)-((c*60)+d) * (-1) )
int main (void)
{
    int a = 2, b = 10, c = 3, d = 15, minutos;
    minutos = elapsed(a,b,c,d);
    printf("%d" , minutos);
    return 0;
}