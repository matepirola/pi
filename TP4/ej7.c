#include <stdio.h>
#define isdigit(a) ( ((a) >= '0' && (a) <= '9')? 1 : 0 )
int main(void)
{
   printf("ingrese un caracter cualquiera: ");
   int letra = getchar();
   if(isdigit(letra))
   {
    printf("\nes un digito.\n ");
   }
   return 0;
}