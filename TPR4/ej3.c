/*Escribir, en no más de 5 líneas, un programa que defina y utilice una macro con un parámetro para calcular el volumen 
de una esfera. El programa deberá calcular el volumen para esferas de radios de 1 a 10 cm., 
e imprimir los resultados en forma tabulada.	
Volumen de la Esfera = ( 4/3 ) * π * r3*/

#include<stdio.h>
#define PI 3.141592
#define VOLUMEN(r) (((float)4/(float)3) * (PI) * ((r)*(r)*(r)))
int main(void){
    double volEsfera; 
    for(int i = 0; i < 10; i++){
        volEsfera = VOLUMEN(i); 
        printf("el volumen es: %f\n" , volEsfera); 
    }
}