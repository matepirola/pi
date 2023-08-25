/*Escribir una función que reciba tres parámetros de entrada de tipo entero y que devuelva en su nombre el mayor de ellos.
(En 2 líneas)*/

#include<stdio.h>
int MAYOR3(const int a, const int b, const int c); 
int main(void){
    int a = 6, b = 6, c = 6, mayor;
    mayor = MAYOR3(a,b,c); 
    printf("%d\n" , mayor); 
    return 0; 
}

int MAYOR3(const int a, const int b, const int c){
    int may; 
    may = ((a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c)); 
    return may; 
}