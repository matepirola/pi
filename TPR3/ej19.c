/*Leer un número entero e indicar cuántos dígitos de ese número son iguales a 5.  
Repetir para el caso de ser un número real, indicando cuántos 5 tiene en su parte entera y cuántos en su parte decimal. 
(En no más de 10 líneas el primer caso, y no más de 25 el segundo caso)*/

#include<stdio.h>
#include"../biblio/getnum.h"
int main(void){
    int a = getint("ingrese numero:"), cont5 = 0; 
    while(a > 0){
        if((a % 5) == 0){
            cont5++; 
        }
        a /= 10; 
    }
    printf("%d\n" , cont5); 
    return 0; 
    
}