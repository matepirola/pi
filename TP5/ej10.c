/*Escribir un programa que ofrezca un menú con las siguientes opciones:
(1)Simplificar una fracción.
(2)Sumar dos fracciones.
(3)Terminar la ejecución.
se elige la primera opción se le solicitará numerador y denominador de la fracción 
y se imprimirá la fracción simplificada (algunos de ellos podrían ser negativos). 
Si se opta por la segunda, se le solicitará dos fracciones y se imprimirá la suma de las mismas, también simplificada. 
Obviamente con la tercera opción finaliza la ejecución del mismo. Escribir una función para cada item del menú. 
(No más de 20 líneas para main y no más de 10 líneas para las funciones del menú).
Pista: Escribir y usar la función DivisorComunMaximo.*/
#include <stdio.h>
#include "../biblio/getnum.h"
#include <math.h>
int mcd(int a, int b);
int simplifica(int a, int b);
int suma(int a, int b, int c, int d);
int main (void){
    int eleg = getint("ingrese su opcion: ");
    if(eleg == 1){
        int a = getint("ingrese denominador: "), b = getint("ingrese divisor: ");
        simplifica(a,b);
    }else if(eleg == 2){
        int a = getint("ingrese divisor: "), b = getint("ingrese un denomidor: "), c = getint("ingrese divisor: "), d = getint("ingrese un denomidor: ");
        suma(a,b,c,d);

    }else if( eleg == 0){
        return 0;
    }
    return 0; 
}
int mcd(int a, int b){
    int resto;
    while (b!=0)
    {
        resto= a%b;
        a=b;
        b=resto;
    }
    return a; 
}

int simplifica(int a, int b){
    int d = mcd(a,b);
    if (d != 0){
        a /= d;
        b /= d;
    }
    return printf("%d/%d \n" , a, b);
}

int suma(int a, int b, int c, int d){
    int div1 = a, dem1 = b, div2 = c, dem2 = d, sum;
    div2 *= b, dem2 *= b, div1 *= d, dem1 *= d;
    sum = (div1 + div2);
    simplifica(sum,dem1);
    return 0;
}