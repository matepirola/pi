/*Escribir una función potencia, que reciba en dos parámetros de entrada la base (de tipo double) y el exponente (entero), 
y devuelva el valor de dicha potencia (En no más de 10 líneas).
Por ejemplo, potencia(2,-4) debe devolver 0.0625. En caso de no poder calcularse el resultado debe devolver –1.*/

#include <stdio.h>
#include "../biblio/getnum.h"
double potencia(double num, int pot);

int main (void){
    double num = getdouble("ingrese numero: "), pot = getdouble("ingrese potencia: "), c;
    c = potencia(num,pot);
    printf ("%f\n" , c);
    return 0;
}

double potencia(double num, int pot){
    double d = 1;
    double neg = 1/num;
    if(pot > 0){
        for (int i = 0; i < pot; i++){
        d *= num;
        }
    }else if(pot < 0){
        for (int i = 0; i > pot; i--){
        d *= neg;
        }
    }
    return d;
}