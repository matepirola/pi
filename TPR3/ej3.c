/*Una empresa paga a su personal de venta en base a comisiones.  El personal de ventas recibe $300 por semana más 
un porcentaje de las ventas brutas de esa semana.  
El porcentaje a aplicar depende del total vendido: si la venta no supera los $1000, no hay porcentaje, hasta $2000 es un 5%, 
hasta $4000 es un 7%, y más de $4000 es un 9%.  
Por ejemplo, un vendedor que vende $5000 en una semana, recibe $300 más 9% de $5000, o sea un total de $750.  
Hacer un programa en C que lea una única variable que indique la suma vendida en una semana, 
e imprima por salida estándar  el monto total a cobrar. Si la suma vendida es un valor incorrecto pedir un nuevo valor. 
(En no más de 15 líneas).*/

#include <stdio.h>
#include "../biblio/getnum.h"

int main(void){
    double a = getdouble("ingrese el total de las ventas:"), cobro = 300; 
    if(a < 0){
        return 0; 
    }
    if(a >= 1000 && a <= 2000){
        cobro += (a* 0.5); 
    }else if(a > 2000 &&  a <= 4000){
        cobro += (a * 0.7); 
    }else{
        cobro += (a * 0.9); 
    }
    printf("el dinero a cobrar es igual a %f \n" , cobro); 
    return 0; 
}