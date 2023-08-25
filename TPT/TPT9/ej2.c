/*Escribir la función recursiva esPotenciaDe3 que recibe un número y retorna 1 si el mismo es un valor mayor que cero y 
potencia exacta de 3 (por ejemplo: 9,27, etc.) y 0 en caso contrario.*/

#include <stdio.h>
#include <assert.h>
 
int esPotenciaDe3(int n);
 
int
main(void) {
    assert(esPotenciaDe3(0) == 0);
    assert(esPotenciaDe3(1) == 1);
    assert(esPotenciaDe3(3) == 1);
    assert(esPotenciaDe3(9) == 1);
    assert(esPotenciaDe3(27) == 1);
    assert(esPotenciaDe3(30) == 0);
    assert(esPotenciaDe3(100) == 0);
    printf("OK!\n");
    return 0;
}

int esPotenciaDe3(int n){
    if (n == 1){
        return 1;
    }else if(n == 0 || n%3 != 0){
        return 0;
    }return esPotenciaDe3(n/3);
}