/*Escribir la función recursiva igualesRet que recibe dos vectores que tienenvalores positivos y 
un -1 para indicar el final del vector y determina si ambosson iguales 
(elemento a elemento, en igual posición)*/

#include <stdio.h>
#include <assert.h>
 
int igualesRet(const int a[], const int b[]);
void igualesVoid(const int[], const int[], int * rta);
 
int
main(void) {
    int resultado;
    int a[] = {9, 4, 3, 2, 3, 7,-1};
    int b[] = {9, 4, 3, 2, 3, 7,-1};
    int c[] = {7, 3, 2, 3, 4, 9,-1};
    int d[] = {9, 4, 3, -1};
    int e[] = {-1};
 
    assert(igualesRet(a, b) == 1);
    assert(igualesRet(b, c) == 0);
    assert(igualesRet(c, d) == 0);
    assert(igualesRet(d, e) == 0);
 
    igualesVoid(a, b, &resultado);
    assert(resultado == 1);
    igualesVoid(b, c, &resultado);
    assert(resultado == 0);
    igualesVoid(c, d, &resultado);
    assert(resultado == 0);
    igualesVoid(d, e, &resultado);
    assert(resultado == 0);
 
    printf("OK!\n");
    return 0;
}


int igualesRet(const int a[], const int b[]){
    if((*a) != (-1) && (*b) != (-1)){
        return 1;
    }
    if(*a != *b){
        return 0
    }return igue
}