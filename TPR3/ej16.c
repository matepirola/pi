/*Dado un número entero positivo, imprimir por salida estándar  el equivalente en base binaria. 
El rango de números a considerar puede estar acotado. (En no más de 15 líneas).*/

#include <stdio.h>
#include "../biblio/getnum.h"
int main(void){
    int a = getint("ingrese el numero decimal:"), binario = 0; 
    for(int i = 0; a >= 1; i++){
        if((a % 2) == 1){
            a -= 1; 
            a /= 2; 
            binario *= (10 * i); 
            binario += 1; 
        }else if((a % 2) == 0){
            a /= 2; 
            binario *= 10; 
        }
    } 
    printf("numero en binario %d\n" , binario); 
    return 0; 

}