// Write a program to count blanks, tabs and new lines.

#include <stdio.h>
int main(void)
{
    int a, contT=0, contL=0, contB=0;
    while((a = getchar()) != EOF)
    {
        if (a == ' ')
        {
            contT++;
        }else if(a == '\n')
        {
            contL++;
        }else if (a == '\t')
        {
            contB++;
        }
    }
        printf("cantidad de espacios: %d\n" , contT);
        printf("cantidad de nueva lineas: %d\n" , contL);
        printf("cantidad de blancos: %d\n" , contB);
    return 0;
}