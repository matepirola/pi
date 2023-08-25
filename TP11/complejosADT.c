#include "complejosADT.h"


typedef struct complejoCDT{
    int real;
    int img; 
}complejoCDT; 

int parteRealComp(complejoADT num){
    int a = num->real; 
    return a; 
}

int parteImagComp(complejoADT num){
    int a = num->img; 
    return a; 
}

complejoADT sumaComp(complejoADT num1, complejoADT num2){
    complejoADT aux = malloc(sizeof(complejoCDT)); 
    aux->real = (num1->real + num2->real);
    aux->img = (num1->img + num2->img); 
    return aux; 
} 

complejoADT nuevoComp(int a, int b){
    complejoADT aux = malloc(sizeof(complejoCDT)); 
    aux->real = a; 
    aux->img = b; 
    return aux;
}

void liberaComp(complejoADT num){
    if(num != NULL){
        free(num); 
    }
}