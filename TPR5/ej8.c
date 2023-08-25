/*La función floor puede ser utilizada para redondear un número a una cantidad específica de lugares decimales. 
Por ejemplo,  floor( x * 100 + .5 ) / 100  redondea x a la posición de los centésimos.

Escribir una función redondeo que reciba dos parámetros de entrada correspondientes al número a redondear 
y la cantidad de cifras decimales que se desean, y que devuelva en su nombre el número redondeado (en no más de 5 líneas).*/

#include <stdio.h>
#include "../biblio/getnum.h"
#include <ctype.h>
#include <math.h>


double redondeo(double numero, int cif);
int main(){
    double num=getdouble("Ingrese un numero a redondear.\n");

    int a=getint("Que opcion desea:\n \
    1) Redondear al entero mas cercano.\n \
    2) Redondear a la decima mas cercana.\n \
    3) Redondear a la centesima mas cercana.\n \
    4) Redondear a la milesima mas cercana.\n");

    switch(a){
        case 1:
            printf("%f", redondeo(num, 0));
            break;
        case 2:
            printf("%f", redondeo(num, 1));
            break;
        case 3:
            printf("%f", redondeo(num, 2));
            break;
        case 4:
            printf("%f", redondeo(num, 3));
            break;
    }
    return 0;
}

double redondeo(double numero, int cif){
    double factor = pow(10, cif);
    return floor(numero * factor + 0.5) / factor;
}


