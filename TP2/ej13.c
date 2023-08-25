/*Escribir un programa que lea dos enteros, e imprima si el segundo es múltiplo del primero. 
Usar el operador condicional.*/

#include <stdio.h>
#include "../biblio/getnum.h"

int main (void)
{
    int a, b;
    a = getint("ingrese primer numero: ");
    b = getint("ingrese segundo numero: ");
    if (a%b == 0)
    {
        printf("el segundo es multiplo del primero. ");
    }
    else
    {
        printf("el segundo numero no es multiplo del primero. ");
    }
    return 0;
}