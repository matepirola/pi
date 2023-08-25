/*Escribir una función recursiva que reciba un arreglo de enteros y le aplique una funciónprovista por el usuario 
a cada elemento del arreglo.La función que se aplica a cada elemento devuelve un entero.*/

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
 
typedef int (*fnInt) (int);
void transforma(int v[], size_t dim, fnInt f);
static void assertArrayEquals(const int *, const int *, size_t);
 
int cuadrado(int x) {
    return x * x;
}
 
// Sólo para testing
static void
assertArrayEquals(const int * expected, const int * actual, size_t dim) {
    for(int i = 0; i < dim; i++) {
        assert(expected[i] == actual[i]);
    }
}
 
int
main(void) {
    int v1[] = {2,3,4,5};
    transforma(v1, 4, cuadrado);
    int v1Expected[] = {4,9,16,25};
    assertArrayEquals(v1Expected, v1, 4);
 
    printf("OK!\n");
    return 0;
}

void transforma(int v[], size_t dim, fnInt f){
    if(dim == 0){
        return; 
    }
    *v = (f) (*v); 
    return transforma(v+1,dim-1,f); 
}