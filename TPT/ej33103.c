#include <stdio.h>

int main (void){

    return 0; 
}

int interseccion(const int v1[], const int v2[], size_t dim1, size_t dim2, int v3[]){
    int cont=0, flag=0;
    for(int i = 0; i<dim1; i++){
        flag=0;
        for(int j= 0; j<dim2 && flag==0 ;j++){
            if(v1[i]==v2[j]){
                v3[cont++]=v1[i];
                flag=1;
            }
        }
    }
    return cont;
}
void imprimir(int cont, int v3[]){
    for(int i = 0; i< cont; i++){
        printf("%d\n" , v3[cont]);
    }
}
