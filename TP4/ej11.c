/*Escribir una función que reciba tres parámetros de entrada de tipo entero y 
que devuelva en su nombre el mayor de ellos. (En 2 líneas)*/
#include <stdio.h>
int May(a,b,c);
int main(void){
    int a = 0 , b = 4 , c= 1;
    int h = May(a,b,c);
    printf("%d\n" , h);


    return 0;
}
int May(int a, int b, int c){
    return (((a >= b) && (a >= c))? (a) : ((b >= c) && (b >= c))? (b) : (c));
}