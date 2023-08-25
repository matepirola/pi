/*Escribir un programa que ofrezca el siguiente menú para redondear un número x 
de varias formas e utilice la función anterior para cada una de ellas:
Redondeo al entero más cercano 
Redondeo a la décima más cercana.
Redondeo a la centésima más cercana.
Redondeo a la milésima más cercana.*/
#include <stdio.h>
#include "../biblio/getnum.h"
double redondeoint(double num);
int main (void){
    double num = getdouble("ingrese numero: ");
    int k;
    k = redondeoint(num);
    printf("%d" , k);
    return 0;
} // 1,1111111

double redondeoint(double num){
    
}