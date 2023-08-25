/*Escribir la macro MAXIMO3 para determinar el mayor de 3 valores, usando la macro definida en el ejercicio anterior. 
(En no más de 10 líneas). Verificar su funcionamiento invocándola desde un programa.*/

#include<stdio.h>
#define MAXIMO3(a, b, c, d) (a = ((b > c) ? ((b > d) ? b : d) : ((c > d) ? c : d) ))

int main(void){
    int a, b = 2, c = 2, d = 20; 
    MAXIMO3(a, b , c, d); 
    printf("%d\n" , a); 
}
