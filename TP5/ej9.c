/*Escribir un programa (en no más de 15 líneas) para encontrar raíces de funciones en un intervalo dado. 
Se deberá recorrer el intervalo a incrementos de 0.001, evaluando la función en cada paso y escribiendo 
por salida estándar los puntos que son raíces. Los extremos del intervalo serán de tipo real 
y su valor estará dado por constantes del programa. 
Tener en cuenta no sólo el caso en el que el resultado de evaluar la función sea cero,
sino también aquellos puntos en los cuales la función cambia de signo.*/
#include <stdio.h>
#include <math.h>
#include "../biblio/getnum.h"
#define EPSILON 0.00001
void sen(double a, double b);
int main(void){
    double a = getdouble("ingrese extremo inferior:"), b = getdouble("ingrese extremo superior:");
    sen(a,b);
    return 0;
}

void sen(double a, double b){
    double h, k, i;
    for( i = a; i <= b; i += (0.001)){
        h = sin(i);
        if ( fabs(k - h) < EPSILON){
             printf("%f\n" , i);
        }
        k = sin(i);
    }
}