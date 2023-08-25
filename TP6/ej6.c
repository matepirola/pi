/*Dado un arreglo ordenado ascendentemente se pide escribir una función que reciba como parámetro
de entrada/salida el arreglo y como parámetro de entrada su dimensión y que lo devuelva desordenado,
simulando la mezcla de un mazo de cartas o de un bolillero (en no más de 10 líneas).*/
#include <stdio.h>
#include "../biblio/random.h"
void mezclar(int vec[], size_t dim);
void imprimir(int vec[], int cont);
void swap(int vec[], int i, int h);
int main(void){
    randomize();
    int vec[] = {1,2,3,4,5,6,7,8};
    int dim = sizeof(vec)/sizeof(vec[0]);
    mezclar(vec, dim);
    imprimir(vec, dim);
    return 0;
}

void mezclar(int vec[], size_t dim){
    int h;
    for(int i = 0; i < dim; i++){
        h = randInt (0,dim -1);
        swap(vec, i, h);
    } 
}

void swap(int vec[], int i, int h){
    
    int aux = vec[i];
    vec[i] = vec[h]; 
    vec[h] = aux;
}

void imprimir(int vec[], int dim){
    for (int i = 0; i < dim; i++){
        printf(",%d" , vec[i]);
    }
}

