/*Escribir una función que ordene las filas de una matriz de cualquier tamaño, 
según el valor de una determinada columna. La función recibirá como parámetros la matriz, 
la cantidad de filas, la cantidad de columnas y el número de columna a tomar como clave de ordenación, 
teniendo en cuenta que la primera columna es la columna 1 (uno).*/
#include <assert.h>
#include <stdio.h>

#define MAXCOL 10

/* Ordena por el método de burbujeo */
void ordenaMatriz (int matriz[][MAXCOL], int fil, int col, int colOrd);
void swap(int* xp, int* yp);

int checkVector(const int v1[], const int v2[], int dim) {
  for(int i=0; i < dim; i++)
    if ( v1[i] != v2[i])
      return 0;
  return 1;
}

int main(void) {
  int m[][MAXCOL] = { {1, 2, 3, 4, 5},
            {6, 2, 8, 9, 10},
            {3, 5, 8, 2, 1},
            {8, 7, 3, 6, 7}};

  int m2[][MAXCOL] = { {1, 2, 3, 4, 5},
            {6, 2, 8, 9, 10},
            {3, 5, 8, 2, 1},
            {8, 7, 3, 6, 7}};
  
  // La matriz no cambia 
  ordenaMatriz(m, 4, 5, 2);

  for(int i=0; i < 4; i++)
    assert(checkVector(m[i], m2[i], 5));

  ordenaMatriz(m, 4, 5, 1);
  assert(checkVector(m[0], m2[0], 5));
  assert(checkVector(m[1], m2[2], 5));
  assert(checkVector(m[2], m2[1], 5));
  assert(checkVector(m[3], m2[3], 5));
  
  ordenaMatriz(m, 4, 5, 3);
  assert(checkVector(m[0], m2[0], 5) || checkVector(m[0], m2[3], 5));
  assert(checkVector(m[1], m2[0], 5) || checkVector(m[1], m2[3], 5));
  assert(checkVector(m[2], m2[1], 5) || checkVector(m[2], m2[2], 5));
  assert(checkVector(m[3], m2[1], 5) || checkVector(m[3], m2[2], 5));

  printf("OK!\n");
  return 0;
}

void ordenaMatriz (int matriz[][MAXCOL], int fil, int col, int colOrd){
    for(int i = 0; i < MAXCOL - 1; i++){
        for(int j = 0; j < MAXCOL - i - 1; j++){
            if(matriz[j][col] < matriz[j + 1][col]){
                swap(&matriz[j][col], &matriz[j + 1][col]);
            }
        }
    }

  
}

void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}