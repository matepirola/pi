/*
Leer dos caracteres seguidos de la entrada estándar e imprimir en la salida estándar si son iguales, 
si el primero es mayor o si el primero es menor, utilizando operadores condicionales:
*/

#include <stdio.h>

int main(void)
{
    char a, b;
    printf("ingrese caracteres: ");
    a = getchar();
    b = getchar();
    if(a == b)
    {
        printf("son iguales.");
    }
    else
    {
        if(a > b)
        {
            printf("el primero es mayor. ");
        }
        else
        {
            printf("el segundo es mayor. ");
        }
    }
    return 0;
}