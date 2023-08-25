#include <stdio.h>
#include "../biblio/getnum.h"

int main (void)
{
    int a;
    a = getint("tiempo transcurridos enn segundos:");
    printf("hora %d\n" , a/3600);
    printf("minuto %d\n" , (a%3600)/60);
    printf("segundos %d\n" , (a%3600)%60);
    return 0;
}