/*Leer un caracter desde la entrada estándar e imprimir por salida estándar si el caracter es una letra o no y, 
en caso de ser una letra, indicar si es letra mayúscula o minúscula, sin tener en cuenta el caracter ‘ñ’. 
(En no más de 15 líneas).*/

#include <stdio.h>
#include <ctype.h>
int main(void){
    char a = getchar(); 
    if(isalpha(a)){
        if('a' <= a && 'z' >= a){
            printf("es una minuscula.\n"); 
        }else{
            printf("es una mayuscula.\n"); 
        }
    }else{
        printf("no es sun letra.\n"); 
    }
    return 0; 
}