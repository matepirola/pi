/*Leer dos caracteres desde la entrada estándar  e imprimir por salida estándar  si son iguales, si el primero 
es mayor o si el primero es menor, teniendo en cuenta su valor ASCII. (En no más de 15 líneas).
Ejemplo: si se ingresa 'a', 'g', debe imprimir  El caracter 'a' es menor al caracter 'g'.*/

#include <stdio.h>
int main(void){
    char a = getchar(); 
    char b = getchar(); 
    if(a == b){
        printf("%c es igual a %c.\n", a, b); 
    }else{
        a > b ? printf("%c es mayor a %c.\n", a, b) : printf("%c es menor a %c.\n", a, b); 
    }
    return 0; 
}