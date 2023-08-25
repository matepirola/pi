/*Dado un arreglo lineal de números reales, cuyo indicador de fin de elementos es cero,
escribir una función para obtener la mayor diferencia entre dos elementos consecutivos. 
(En no más de 5 líneas). Tener en cuenta que los números pueden ser negativos. 
En caso de que el vector tenga un solo elemento deberá retornar como diferencia el valor cero.*/
#include <stdio.h>
#include <math.h>
double diferencia(const double vec[], size_t dim);
int main(void){
    double h;
    double vec[] = {1,2,3,4,5,6,7,8,9,0};
    int dim = sizeof(vec)/sizeof(vec[0]);
    h = diferencia(vec, dim);
    printf("%f\n" , h);
    return 0;
}

double diferencia(const double vec[], size_t dim){
    int restNuev, may, restViej;
    for(int i = 0; vec[i] != 0; i++){
        restNuev = fabs(vec[i] - vec[(i+1)]);
        may = ((restNuev > restViej)? restNuev : restViej);
        restViej = fabs(vec[i] - vec[(i+1)]);
       
    }
    return may;
}