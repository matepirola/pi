/*Escribir la macro isdigit que dado un caracter  indique si dicho caracter representa un dígito decimal o no.*/

#include<stdio.h>
#define ISDIGIT(a) (printf(("%s es un digito\n") , ((a >= '0') ? ((a <= '10') ? "si" : "no") : "no")) )

int main(void){
    char a = '5'; 
    ISDIGIT(a); 
}