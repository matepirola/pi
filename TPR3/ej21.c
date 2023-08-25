/*Escribir un programa que lea un número entero, y escriba por salida estándar  dicho número y un cartel indicando 
si es capicúa o no. (En no más de 10 líneas)*/
#include <stdio.h>
#include "../biblio/getnum.h"
#include <math.h>
int main (void){
    int a = getint("ingrese el numero:"), new = 0; 
    int num = a; 
    while(a > 0){
        new *= 10; 
        new += a % 10; 
        a /= 10; 
    }
    printf("el numero es %s" , (num == new) ? "capicua" : "no capicua"); 
}