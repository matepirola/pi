/*Dada una variable entera que indica el lado de un cuadrado, imprimir por salida estándar  dicho cuadrado 
en forma de asteriscos. 
Resolverlo con dos ciclos anidados.
Resolverlo con un único ciclo for.
*/

#include <stdio.h>
int main(void){
    int per = 5; 
    for(int i = 0; i < per; i++){
        printf("\n"); 
        for(int j = 0; j < per; j++){
            printf("* "); 
        }
    }
    printf("\n"); 
    return 0; 
}

int main(void){
    int per = 6; 
    for(int i = 0; i < (per * per); i++){
        if((i % per) == 0){
            printf("\n"); 
        }
        printf("* "); 
    }
    printf("\n"); 
    return 0; 
}