/*Repetir el ejercicio anterior, teniendo en cuenta que los arreglos de entrada pueden tener elementos
 repetidos, pero el de salida NO debe tener repeticiones. */


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
  int v1[] = { 1, 5, 15, 15, 30, 35, 35, 35, 35, 35, 45, 55, -1};
  int v2[] = {-1};
  int v3[] = { 1, 1, 1, 1, 1, 1, -1};
  int v4[] = { 2, 3, 15, 16, 33, 35, 45, 65, -1};
  int dimRes;
  int res[30];

  int v1_v2[] = {1, 5, 15, 30, 35, 45, 55, -1};
  unirArreglos(v1, v2, res);
  check(v1_v2, res);

  unirArreglos(v2, v2, res);
  check(v2, res);

  unirArreglos(v1, v1, res);
  check(v1_v2, res);

  unirArreglos(v1, v3, res);
  check(v1_v2, res);

  int expected[] = {1, 2, 3, 5, 15, 16, 30, 33, 35, 45, 55, 65, -1};
  unirArreglos(v1, v4, res);
  check(expected, res);

  puts("OK!");
  return 0;
}

void unirArreglos ( const int ar1[], const int ar2[], int resultado[]){
    for (int i = 0; ar1[i] != -1 || ar2[i] != -1; i++){
        int con1 = 0, con2 = 0; 
        while (ar1[con1] == ar1[(con1 + 1)]){
            con1++;
        }while (ar2[con2] == ar2[(con2 + 1)]){
            con2++; 
        }
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