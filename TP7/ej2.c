/*Escribir un programa que convierta enteros de una base a otra. Los números entre y después de los símbolos 
'<' y '>' indican la base de entrada y de salida respectivamente. Dichos números serán decimales entre 2 y 10.
Ejemplo: la cadena de entrada < 5 > 2  indica que leerá números enteros en base 5 y los imprimirá en su equivalente binario. 
Luego, si se ingresa 41 se lo deberá pasar a 10101.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int c = 2, d = 3;
    int * base1 = c;
    int * base2 = d; 
    int cant = scanf("<%1[2-10]>%1[2-10]" , &base1, &base2);

    return 0;
}
