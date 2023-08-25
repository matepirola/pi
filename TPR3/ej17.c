/*Escriba y ejecute un programa que imprima todos los múltiplos de 10 (10, 20, 30, 40, etc.)  en no más de 5 líneas 
¿Qué sucede cuando ejecuta este programa ?*/

#include<stdio.h>

int main(void){
    int a; 
    for(int i = 0; ; i++){
        a = (i * 10); 
        printf("%d" , a); 
    }
    return 0; 
}