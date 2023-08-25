/*Escribir la macro DIVISOR que reciba dos números enteros (no necesariamente positivos) y 
retorne 1 si el segundo es divisor del primero y cero si no es divisor. No usar funciones auxiliares.*/

#include<stdio.h>
#define DIVISOR(x, y) ((y != 0) ? (((x % y) == 0) ? 1 : 0) : 0) // me aseguro que y != 0.

int main(void){
    int a = 12, b = 0; 
    printf("%d\n" , DIVISOR(a, b)); 
    int c = a % b; 
    printf("%d\n" , c); 
}