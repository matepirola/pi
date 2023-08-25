#include <stdio.h>
#define EPSILON 0.000001
int main(void)
{
    float e, cortar = 0;
    int i, b = 1;
    for(i = 0; i <= 30; i++)
    {
    if (i == 0)
    {
        e = 1;
    }
    else
    {
        b *= i; 
        cortar += (1.0 / (float)b);
        e += (1.0 / (float)b);
    }
    printf("\t\t%d\t|\t%.20f\n" , (i+1), e);
    }
    return 0;
}