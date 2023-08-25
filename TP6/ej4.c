/*Escribir una función que reciba un vector desordenado de números enteros y su dimensión,
y construya otro vector eliminando los valores repetidos. 
La función deberá retornar en su nombre la dimensión del nuevo vector 
(La función solicitada  no debe superar las 10 líneas).*/

#include <stdio.h>
int vecOrd(const int vec[], size_t dim, int vec2[]);
void imprimir (int vec2[], int k);
int main (void){
    int g;
    int vec[] = {2,3,4,4,3,2};
    int dim = sizeof(vec)/sizeof(vec[0]);
    int vec2[dim];
    g = vecOrd(vec, dim, vec2);
    imprimir(vec2, g);
    return 0; 
}

int vecOrd(const int vec[], size_t dim, int vec2[]){
    int k = 0;
    for (int i = 0; i < dim; i++){
        int cont = 0;
        for(int j = 0; j < i && cont == 0; j++){
            
            if ( vec[i] == vec[j] ){

                cont++;

            }
        }
        if(cont == 0){
                vec2[k++]= vec[i];
            }
    }
    return k;
}

void imprimir (int vec2[], int k){
    for(int i= 0; i<k; i++){
        printf("%d," , vec2[i]);
    }
}