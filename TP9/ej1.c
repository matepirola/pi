/*Escribir una función recursiva que reciba como parámetros de entrada un vector de enteros y su dimensión, 
y que devuelva en su nombre la suma de todos sus elementos.*/

#include <stdio.h>
int suma(int *v, int dim);

int main(void){
    int v[]= {1,2,3,4,5}; 
    int dim = 5; 
    int c = suma(v,dim); 
    printf("%d" , c); 
    printf("\n"); 
}

int suma(int *v, int dim){
    if(dim == 0){
        return 0;
    }return *v + suma(v+1, dim - 1);
}