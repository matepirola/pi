#include <stdio.h>
#define MAXIMO2(a, b, c) {c = (a > b)? a : b; }
int main (void)
{
    int a = 10, b = 5, c;
    MAXIMO2(a, b, c);
    printf("%d\n" , c);
    return 0; 
}