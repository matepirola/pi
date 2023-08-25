/*Escribir un programa para hallar las raíces de una función matemática en un intervalo cerrado, 
recorriéndolo de forma tal que el intervalo quede dividido en 100000 (cien mil) particiones o subintervalos. 
Ejemplo: si el intervalo es [1, 50000] deberá evaluar la función en los puntos 1, 1.5, 2, etc. 
(también se tomarán como válidos los puntos 1, 1.49999, etc ).
El programa deberá solicitar los extremos del intervalo, imprimiendo los resultados en la salida estándar. 
La función a evaluar recibe y devuelve un valor real y está dada por la macro FUNCION.
La función que realice la búsqueda de las raíces debe recibir como parámetros una estructura 
que represente al intervalo,  regresando en su nombre una estructura que empaquete un arreglo 
con aquellas particiones donde haya raíces y la dimensión de dicho arreglo.
Para detectar una raíz se deben considerar dos casos:
Que la función cambie de signo entre dos puntos: En ese caso se agrega al arreglo una partición con ambos puntos.
Que la función se haga cero en un punto (considerando un error de EPSILON): En ese caso la partición que se 
agrega al arreglo de resultados está formada por el punto anterior al que se detectó como raíz y el próximo que no lo sea.*/

#include <stdio.h>
#include "../biblio/getnum.h"
#include <math.h>
#define FUNCION(x) ( (2*x*x) - (4*x) )
#define EPSILON 0.00001


typedef struct inter{
    double a;
    double b;  
}inter; 

typedef struct r{
    double raices[2]; 
    int dim; 
}r; 

void raiz(inter intervalo, r * raices); 


int main(void){
    inter intervalo; 
    intervalo.a = getdouble("ingrese el extremo inferior del intervalo:");
    intervalo.b = getdouble("ingrese el extremo superior del interbalo:"); 
    r raices; 
    raiz(intervalo, &raices); 
    for(int i = 0; i < 2; i++){
        printf("%f\n" , raices.raices[i]); 
    }

}


void raiz(inter intervalo, r * raices){
    double sum = (intervalo.a + intervalo.b)/100000; 
    double t =  intervalo.a; 
    double aux; 
    while(t <= intervalo.b){
        t += sum; 
        aux = t + sum; // es el siguien a t; 
        if((FUNCION(t) <= 0 + EPSILON) || (FUNCION(t) < 0 && FUNCION(aux) > 0) || (FUNCION(t) > 0 && FUNCION(aux) < 0)){
            raices->raices[raices->dim++] = t; 
        }
    }
}