/*Escribir una macro MAXIMO2 que recibiendo tres parámetros, asigne al tercer parámetro el mayor de los dos primeros. 
Utilizarla en un programa para verificar su correcto funcionamiento. (En no más de 5 líneas)*/

#include<stdio.h>
#define MAXIMO2(a, b, c) {a = (b > c) ? b : c; }

int main(void){
    int a, b = 2, c = 2; 
    MAXIMO2(a, b , c); 
    printf("%d" , a); 
}
