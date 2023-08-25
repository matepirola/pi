/*Escriba un programa que lea un entero no negativo ( cero o mayor ) y que calcule e imprima su factorial. 
En caso de ingresar un valor inválido, imprimir un cartel aclarando cuáles son los valores válidos. (En no más de 10 líneas)*/

#include<stdio.h>
#include "../biblio/getnum.h"
int main(void){
    int a = getint("ingrese un numero positivo:"), b = 1; 
    while(a > 0){
        b *= a; 
        a--; 
    }
    printf("%d\n" , b); 
    return 0;     
}
