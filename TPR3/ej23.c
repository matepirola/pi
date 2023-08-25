/*Escriba un programa que lea de entrada estándar un número entero positivo y calcule la cantidad de bits en ‘1’ 
que contiene.

Por ejemplo:

Si el número es 1, imprime 1
Si el número es 64, imprime 1
Si el número es 229, imprime 5
*/


#include<stdio.h>
int main(void){
    int a = 229, cont = 0; 
    while(a > 0){
        if((a % 2) != 0){
            cont++; 
        }
        a /= 2; 
    }
    printf("%d\n" , cont); 
    return 0; 
}