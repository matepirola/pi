/*Escribir una función potencia, que reciba en dos parámetros de entrada la base (de tipo double) y el exponente (entero), 
y devuelva el valor de dicha potencia (En no más de 10 líneas).
Por ejemplo, potencia(2,-4) debe devolver 0.0625. En caso de no poder calcularse el resultado debe devolver –1.*/

#include<stdio.h>
#include "../biblio/getnum.h"
#define EPSILON 0.0001
double potencia(double base, int exponente); 

int main(void){
    double base = getdouble("ingrese base:\n"); 
    int exponente = getint("ingrese exponente:\n");
    double c = potencia(base , exponente); 
    c = printf("%f" , c); 
}

double potencia(double base, int exponente){
    double valor = base; 
    if(exponente > 0){
        for(int i = 1; i < exponente; i++){
            valor *= base; 
        }
    }else if(exponente == 0){
        if(base > (-EPSILON) && base < EPSILON){
            return valor = -1; 
        }else{
            return valor = 1; 
        }
    }else{
        for(int j = 0; j < exponente; j++){
            valor *= (1/base); 
        }
    }
    return valor; 

}