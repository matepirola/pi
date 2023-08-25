/*Escribir un programa que ofrezca las siguientes opciones para accionar sobre un caracter leído desde la entrada estándar. 
Utilizar distintas funciones (con no más de 4 líneas) para cada una de las opciones y una función para el menú de opciones:

(1) Convertir de mayúscula a minúscula. 
(2) Convertir de minúscula a mayúscula. 
(3) Imprimir el carácter siguiente. 
(4) Imprimir la siguiente letra en forma circular (si la letra es 'z', debe imprimir 'a')
*/

#include <stdio.h>
#include <ctype.h>
#include "../biblio/getnum.h"

char accion(char caracter, const int opcion);
char minuscula(char caracter); 
char mayuscula(char caracter); 
char siguiente(char caracter); 
char circulo(char caracter); 
int main(void){
    char caracter = 'a'; 
    int opcion = getint("ingrese una de las opciones: (del 1 al 4)\n");   
    char a = accion(caracter, opcion);
    printf("%c" , a); 
    return 0; 
}

char accion(char caracter, const int opcion){
    char sub = caracter; 
    int b = opcion; 
    if(b == 1){
        minuscula(sub); 
    }else if(b == 2){
        mayuscula(sub); 
    }else if(b == 3){
        siguiente(sub); 
    }else if(b == 4){
        circulo(sub); 
    }else{
        return 1; 
    }
    return sub; 
}

char minuscula(char sub){
    sub += tolower(sub); 
    return sub; 
} 
char mayuscula(char sub){
    sub = toupper(sub); 
    return sub; 
}
char siguiente(char sub){
    sub += 1; 
    return sub; 
}
char circulo(char sub){
    if(sub == 'z'){
        sub = 'a'; 
    }else if(sub == 'Z'){
        sub = 'A'; 
    }else{
        sub += 1; 
    }
    return sub; 
}