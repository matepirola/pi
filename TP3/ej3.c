#include <stdio.h>
#include "../biblio/getnum.h"
int main(void){
    double a = getdouble("ingrese el monto de ventas:");
    while(a >= 0){
    if(a >= 0 && a <= 1000){
        a = a * 0;
    }else if(a > 1000 && a <= 2000){
        a = a * 0.05;
    }else{
        a > 2000 && a <= 4000 ? (a = a * 0.07) : (a = a * 0.09);
    }
    printf("el total a pagar es %f\n" , (a + 300));
    return 0;}
    printf("ingrese un valor valido: "); 
    }


