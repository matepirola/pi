#include <stdio.h>
#include <math.h>
#define N 5
#define M 5


int main (void){

    return 0;
}


 armaFilas (const int mat[][M], int vec[], int dim){
    int num = 0, cont = 0, a;
    for(int i = 0; i <= N; i++ ){
        int x = N;
        for(int j = 0; j <= M; j++){
            if(mat[i][j] >= 0 && mat[i][j] <= 9){
                if(mat[i][j] == 0){
                    x--;
                }
                a = mat[i][j]*pow(10,x--);
                num += a;
            }

        }
        cont++;
    }
    return cont;
}   