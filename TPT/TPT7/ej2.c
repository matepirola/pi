// implementar un progtama que lea de la entrada estanadr hasat eof y genera el super vector que todo lo puede guardar.
// Lurgo imprimir el contenudo del vectir en salida estabdar.

#include <stdio.h>
#include <stdlib.h>

#define BLOQUE 20 // voy agregando de a bloques de memoria por que agregar de a uno es muy ineficeinte.

int main(void){
    char a;
    int tamanioActual = 0;
    char * superVector = NULL; 
    while((a = getchar()) != '\n'){
        if((tamanioActual % BLOQUE) == 0)
            superVector = realloc(superVector, (tamañoActual+BLOQUE) * sizeof(char));
        superVector[tamañoActual++] = a; 
    }
    for(int j = 0; j<tamañoActual ; j++){//supervector[j] != 0
        printf("%c", superVector[j]);
    }
    free(superVector);
    puts("");
    return 0;
}