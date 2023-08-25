/*
Escribir un programa que ofrezca las siguientes opciones para accionar sobre un caracter
leído desde la entrada estándar. Utilizar distintas funciones (con no más de 4 líneas) 
para cada una de las opciones y una función para el menú de opciones:

Convertir de mayúscula a minúscula. 
Convertir de minúscula a mayúscula. 
Imprimir el carácter siguiente. 
Imprimir la siguiente letra en forma circular (si la letra es 'z', debe imprimir 'a')
*/

#include <stdio.h>
#include "../biblio/getnum.h"
#include <ctype.h>
#define DIFFMAY 'a'-'A'
#define DIFFCIRC 'z'-'a'
char sig(char a);
char Maysc(char a);
char Min(char a);
char sigcad(char a);
int main (void){
    int a, deci, fun;
    printf("ingrese carater: ");
    a = getchar();
    deci = getint("elija su opcion: \n(1)\t convertir de mayuscula a minuscula. \n(2)\t convertir de minuscula a mayuscula. \n(3)\t imprimir el caracter siguiente. \n(4)\t imprimirt siguiente letra.\n");
    if (deci == 1){
        fun = Min(a);
        printf("\n%c\n" , fun);
    }else if(deci == 2){
        fun = Maysc(a);
        printf("\n%c\n" , fun); 
    }else if(deci == 3){
        fun = sig(a);
        printf("\n%c\n" , fun);
    }else if(deci == 4){
        fun = sigcad(a);
        printf("\n%c\n" , fun);
    }
    return 0; 
}

char Min(char a){
    char min;
    min = tolower(a);
    return min;
}

char Maysc(char a){
    char maysc;
    maysc = toupper(a);
    return maysc;
}

char sig(char a){
    a += 1;
    return a;
}

char sigcad(char a){

  if ( a == 'z' || a == 'Z' ){

    return a -= DIFFCIRC;

  }else{

   return a += 1;
    
    }
  
}
