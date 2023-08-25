/*escribir una funcin que reciba una matriz cuadrad de 
dimension N (N es una constante previamente definida)
y rertorne 1 si la misma cumple con las siguientes condiciones:
1) contiene todos los numeros de 1 a N*N inclusive.
2) en cada fila contiene numeros consecutivos (no ordenados).*/

#include <stdio.h>

#define N 4

int verifica(int mat[][N]);

int main(void){

    int matriz[N][N] = {{4, 3, 1, 2}, {7, 5, 6, 8}, {10, 12, 9, 11}, {16, 14, 13, 12}};
    int x = verifica(matriz);
    if( x == 1 ){
        printf("\nPerfecto!\n\n");
    }else{
        printf("\nMal\n\n");
    }

    return 0;
}

int verifica(int mat[][N]){
    int count = 0; 
    int i; 
    int aux[N*N] = {0}; 
    for(i = 0; i < N; i++){
        int aux1[N] = {0}; 
        for(int h = 1; h < N; h++){
            aux1[h + 4*i] = 1; 
        }
        for(int j = 0; j < N; j++){
            if(aux[mat[i][j]] == 1){
                return 0;
            }
            aux[mat[i][j]] = 1; 
            if(aux1[mat[i][j]] == 0){
                return 0; 
            }
        }
    }
    return 1; 
}
