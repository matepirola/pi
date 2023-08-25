/*Escribir una función que reciba dos parámetros de entrada de tipo entero y devuelva en su nombre un número aleatorio 
entre ambos números. (En una línea)*/

#include<stdio.h>
#include "../biblio/random.h"
int random(const int a, const int b); 

int main(void){
    randomize(); 
    int a = 0 , b = 10; 
    int c = random(a,b); 
    printf("%d" , c); 
}

int random(const int a, const int b){
    return randInt(a,b); 
}