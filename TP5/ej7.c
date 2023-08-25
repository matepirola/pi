/*Escribir una función real para calcular aproximadamente el valor de e^x  
por  medio de la serie 1 + x   + x2 / 2! + x3 / 3! + ....... 
Dicha función recibe como parámetros de entrada el valor de x. (En no más de 10 líneas)
Hacer un programa que invoque a la función y escriba el resultado de la misma 
y el valor de la función exp(x) de C.*/

#include <stdio.h>
#include "../biblio/getnum.h"
double aprox(double x);
int factorial(int a);
int main (void){
    double x = getdouble("ingrese valor de X= ");
    double b = aprox(x);
    printf("%f\n" , b);
    return 0;
}

double aprox(double x){
    double d = 1;
    for(double h = 1; h <= 4; h++){
        d += ((h*x)/(double)factorial(h));
    }
    return d;
}

int factorial(int a){
    int fact = 1;
    for(int i = 1; i <= a; i++){
        fact *= i;
    }
    return fact;
}
