/*Escribir una función que, dada una matriz de N filas y N columnas determine si es un “cuadrado
mágico”.
Una matriz es cuadrado mágico cuando:
● es cuadrada (NxN) (donde N es una constante simbólica)
● tiene todos los números del 1 al N2
● la suma de los elementos de cualquier fila es igual a la suma de los elementos de cualquier
columna*/

#include <stdio.h>
#include <assert.h>

#define N 4

int isMagic(const int mat[][N]);

int main(){


  const int m1[N][N] = {
      {16, 4, 5, 10},
      {5, 10, 11, 8},
      {9, 6, 7, 12},
      {4, 15, 14, 1}
  };

  assert(isMagic(m1) == 0);

  const int m2[N][N] = {
      {1, 2, 3, 4},
      {5, 6, 7, 8},
      {9, 10, 11, 12},
      {13, 14, 15, 16}
  };

  assert(isMagic(m2) == 1);

  puts("OK!");




}

int isMagic(const int mat[][N]){
    int sumCol; 
    int sumFil; 
    int aux[N*N] = {0}; 
    for(int i = 0; i <= N; i++){
        for(int j = 0; j <= N; j++){
            if(aux[mat[i][j]] == 1){
                return 0;
            }
            aux[mat[i][j]] = 1; 
            sumCol += mat[j][i]; 
            sumFil += mat[i][j]; 
        }
    }
    if(sumCol == sumFil){
        return 1;
    }else{
        return 0;
    }
}