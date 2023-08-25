/*La función floor puede ser utilizada para redondear un número a una cantidad específica de lugares decimales.
 Por ejemplo,  floor( x * 100 + .5 ) / 100  redondea x a la posición de los centésimos.
 (a) Escribir una función redondeo que reciba dos parámetros de entrada correspondientes
 al número a redondear y la cantidad de cifras decimales que se desean, y que devuelva 
 en su nombre el número redondeado (en no más de 5 líneas).*/

#include <stdio.h>
#include "../biblio/getnum.h"
double redondeo(double num, int dec);
int main(void){
    double k, num = getdouble("ingrese numero: ");
    int dec = getint("cantidad de decimales: ");
    k = redondeo(num,dec);
    printf("\n%f\n" , k);
    return 0;
}

double redondeo(double num, int dec){
    double h = 1;
    for(int i = 0; i < dec; i++){
        num *= 10;
        h *= 10;
    }
    return ((int)(num + 0.5)/h);
}