#include <stdio.h>
#include "../biblio/getnum.h"
int main (void)
{
    int Num, Cont = 0, c;
    Num = getint("ingrese numero: ");
    while(Num > 0)
    {
        c = Num%10;
        if (c == 5)
        {
            Cont++;
        }
        Num /= 10;
    }
    printf("Cantidad de 5 en el numero: %d\n" , Cont);
    return 0; 
}