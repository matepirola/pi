/*se tiene en un  vector los factores que se obtienen como resultado de la factorizacion de un numero.
los factores pueden estar repetidos y estan ordenados de menor a mayor. el velor -1 indica el final del vector. 
escribir la funcion factoreo que reciba el vector con los factores y obtenga el numero original y deje en el vector
solo los valores diferentes.*/

#include <stdio.h>
#include <assert.h>

int factoreo(int vec[]); 

int main(void) {
     int factores[] = {2, 2, 2, 3, 3, 4, 5, 5, 6, 6, 6, 6, 7, -1};
     long resultado = factoreo(factores);
     assert(resultado == 65318400);
     assert(factores[0] == 2);
     assert(factores[1] == 3);
     assert(factores[2] == 4);
     assert(factores[3] == 5);
     assert(factores[4] == 6);
     assert(factores[5] == 7);
     assert(factores[6] == -1);
     int factores2[] = {2, -1};
     resultado = factoreo(factores2);
     assert(resultado == 2);

     assert(factores2[0] == 2);
     assert(factores2[1] == -1);
     int factores3[] = {11, 11, 13, -1};
     resultado = factoreo(factores3);
     assert(resultado == 1573);  // 11 * 11 * 13
     assert(factores3[0] == 11);
     assert(factores3[1] == 13);
     assert(factores3[2] == -1);
     int factores4[] = {-1};
     resultado = factoreo(factores4);
     assert(resultado == 0);
     assert(factores4[0] == -1);
     int factores5[] = {1, -1};
     resultado = factoreo(factores5);
     assert(resultado == 1);
     assert(factores5[0] == 1);
     assert(factores5[1] == -1);
     puts("OK!");
     return 0;
}



int factoreo(int vec[]){
    int dim = 0; 
    int num;
    if(vec[0] == -1){
        num = 0; 
    } else{
        num = 1; 
        for(int i = 0; vec[i] != (-1); i++){
            num *= vec[i]; 
            if(vec[i] != vec[i+1]){
                vec[dim++] = vec[i]; 
            }
        }
    }
    
    vec[dim] = -1; 
    return num; 
}