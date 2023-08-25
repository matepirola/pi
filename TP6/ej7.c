/*Hacer una función que reciba dos parámetros de entrada representando arreglos de números enteros positivos,
ordenados en forma ascendente y sin elementos repetidos. El último elemento de cada arreglo es -1. 
La función debe devolver en un tercer parámetro de salida un arreglo ordenado con la unión de los dos primeros, 
también terminado en -1.*/

#include <assert.h>
#include <stdio.h>


void unirArreglos ( const int ar1[], const int ar2[], int resultado[]);


void check(const int v1[], const int v2[]) {
  int i;
  for(i=0; v1[i] != -1; i++)
     assert(v1[i]==v2[i]);
  assert(v1[i]==-1);
  assert(v2[i]==-1);
}

int main(void) {
  int v1[] = { 1, 5, 15, 30, 35, 45, 55, -1};
  int v2[] = {-1};
  int v3[] = { 1, -1};
  int v4[] = { 2, 3, 15, 16, 33, 35, 45, 65, -1};
  int dimRes;
  int res[30];

  unirArreglos(v1, v2, res);
  check(v1, res);

  unirArreglos(v2, v2, res);
  check(v2, res);

  unirArreglos(v1, v1, res);
  check(v1, res);

  unirArreglos(v1, v3, res);
  check(v1, res);

  int expected[] = {1, 2, 3, 5, 15, 16, 30, 33, 35, 45, 55, 65, -1};
  unirArreglos(v1, v4, res);
  check(expected, res);

  printf("OK!\n");
  return 0;
}

void unirArreglos ( const int ar1[], const int ar2[], int resultado[]){
    // ar1[] = {1,2,3,4,5,6,-1}, ar2[] = {5,6,7,8,-1}
    for (int i = 0; ar1[i] != -1 || ar2[i] != -1; i++){
        int con1 = 0, con2 = 0; 
        if(ar1[con1] < ar2[con2]){
            resultado[i] = ar1[con1];
            con1++; 
        }else if (ar1[con1] > ar2[con2]){
            resultado[i] = ar2[con2];
            con2++;
        }else{
            resultado[i] = ar2[con2];
            con2++;
            con1++;
        }
    }
}