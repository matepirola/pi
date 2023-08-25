#include <stdio.h>
int main (void)
{
    int a, b = 0, c = 0;
    while ((a = getchar()) != EOF && ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z') || (a == ' ')))
    {
        
        if((a >= 'a' && a <= 'z'))
        {
            b++;
        }
        if((a >= 'A' && a <= 'Z'))
        {
            c++;
        }
    }   
    printf("cantidad de mayusculas: %d" , c);
    printf("\ncantidad de minusculas: %d\n" , b);
    return 0;
}