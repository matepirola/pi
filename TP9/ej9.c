/*El método de Newton-Raphson para aproximar la raíz cuadrada de un número positivo se puede calcular 
aplicando sucesivamente los siguientes pasos un cierto número de veces  ITER:


donde el valor original conveniente para comenzar este ciclo suele ser X/2.
	Escribir una función recursiva raizCuadrada que regrese en su nombre el valor aproximado de la raíz 
    cuadrada de un número, recibiendo tres parámetros de entrada:
valorAnterior: real (representa el valor  hasta ahora  candidato como raíz cuadrada)
iter: entero  que  representa  la cantidad  de iteraciones que  deben realizarse  para aproximar la raíz cuadrada.
x:  real al que se le quiere calcular la raíz cuadrada.*/

#include <stdio.h>
#include <assert.h>
#include <math.h>

#define EPSILON 0.01
double raizNR(double VA, double iter, double x);

int main(void){

    assert(fabs(raizNR(4, 3, 8)-2.833) <= EPSILON);
    assert(raizNR(0, 0, 0) <= EPSILON);
    assert(raizNR(0, 0, 4) <= EPSILON);
    
    printf("OK!\n");
}

double raizNR(double VA, double iter, double x){
    if(x == 0){
        return 0; 
    }if(iter == 0){
        return VA; 
    }
    return raizNR((VA + (x/VA))/2, iter - 1, x);
}
