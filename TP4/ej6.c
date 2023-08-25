#include <stdio.h>
#define MAXIMO2(a, b, c) {c = (a > b)? a : b; }
#define MAXIMO3(c, d, e) {e = (c > d)? c : d; }
int main (void)
{
    int a=10 , b=9, c, d=6, e;
    MAXIMO2(a, b, c);
    MAXIMO3(c , d, e);
    printf("%d\n" , e);
    return 0;
}