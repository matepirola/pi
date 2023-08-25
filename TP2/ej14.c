/*
Escribir un programa que lea dos enteros 
y a continuación imprima el promedio, la suma, el menor y el mayor de ellos (o indicar que son iguales). 
Usar el operador condicional
*/
#include <stdio.h>
#include "../biblio/getnum.h"

int main(void)
{
    int a, b;
    a = getint("ingrese 1° numero: ");
    b = getint("ingrese 2° numero: ");
    printf("la suma es: %d\n" , a + b);
    printf("el promedio es: %f\n" , (a + b)/(float)2);
    if (a > b)
    {
        printf("el mayor es: %d\n" , a);
        printf("el menor es: %d\n" , b);
    }else
    {
        printf("el mayor es: %d\n" , b);
        printf("el menor es: %d\n" , a);
    }
    if (a == b)
    {
        printf("los numeros son iguales.");
    }else 
    {
        printf("los numeros no son iguales.");
    }
    return 0;
}