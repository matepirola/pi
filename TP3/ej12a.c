#include <stdio.h>
int main (void)
{
    int b, c, d;
    for(b =3; b <= 23; b += 5)
    {
        printf("%d," , b);
    }
    printf("\n");
    for(c = 20; c >= -10; c -= 6)
    {
        printf("%d," , c);
    }
    printf("\n");
    for(d = 19; d <= 51; d += 8)
    {
        printf("%d," , d);
    }
return 0;
}