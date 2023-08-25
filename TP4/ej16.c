#include <stdio.h>
#define DIVISOR(a, b) (a = ((a % b) == 0 && (a/b) != 0)? 1 : 0 ) // con a/b != 0, me aseguro que a sea siempre mayor que b.
int main (void){
    int a = 10, b = -2;
    a = DIVISOR(a,b);
    printf("%d" , a);
    return 0;
}