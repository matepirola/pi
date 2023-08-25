/*
Leer un caracter desde la entrada estándar e imprimir por salida estándar si el caracter es una letra o no y, 
en caso de ser una letra, indicar si es letra mayúscula o minúscula, sin tener en cuenta el caracter ‘ñ’. 
(En no más de 15 líneas).
*/
#include <stdio.h>
int main(void){
char a;
a = getchar();
if((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z')){
    if (a >= 'A' && a <= 'Z'){
        printf("es una letra mayuscula");
    }else {
        printf("es una letra minuscula.");
    }
}else {
    printf("no es una letra.");
}
return 0;
}