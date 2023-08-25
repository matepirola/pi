/*implementar la función anterior para vectores ordenados.*/
#include <stdio.h>
int eliminar(const int vec[], size_t dim, int vec2[]);
void imprimir(int vec2[], int k);
int main(void){
    int vec[] = {2,2,2,2,3,4,4,4,5};
    int g;
    int dim = sizeof(vec)/sizeof(vec[0]);
    int vec2[dim];
    g = eliminar(vec, dim, vec2);
    imprimir(vec2,g);
    return 0;
}

int eliminar(const int vec[], size_t dim, int vec2[]){
    int k; 
    for(int i = 0; i < dim; i++){
        if (vec[i] != vec[i - 1]){
            vec2[k++] = vec[i];
        }
    }
    return k; 
}

void imprimir(int vec2[], int k){
    for(int i = 0; i < k; i++){
        printf(",%d" , vec2[i]);
    }
}




