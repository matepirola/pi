/*Escribir una función real para calcular aproximadamente el valor de ex  por  medio de la serie  
1 + x + x2 / 2! + x3 / 3! + ....... Dicha función recibe como parámetros de entrada el valor de x. (En no más de 10 líneas)
Hacer un programa que invoque a la función y escriba el resultado de la misma y el valor de la función exp(x) de C.*/

#include <stdio.h>
#include <math.h>
#define EPSILON 0.00001
double ex(int x);

int main(void){
    int x = getint("ingrese valor de x:"); 
    double a = ex(x); 
    printf("%f\n" , a); 
}

double ex(int x){
    double y = 1;  
    int d = 1, c = 1;
    for(int i = 0; (1.0/(double)c) > EPSILON; i++){
        c *= d; 
        y += ((pow(x, d))/(double)(c)); 
        d++; 
    }
    return y; 
}