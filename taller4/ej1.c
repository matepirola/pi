/*escribir una funcion que genere los primeron n numeros.*/

#include <stdio.h>
#include <math.h>
#include "../biblio/getnum.h"

void contnumprimos(int n); 
int primo(int num); 

int main(void){
    int n = getint("ingrese la cantidad n de numero primos que desea: \n"); 
    contnumprimos(n); 
    return 0; 
}

void contnumprimos(int n){
    int cont = 0; 
    for(int i = 0; cont <= n; i++){
        if(primo(i)){
            printf("%d\n" , i); 
            cont++; 
        }
    }
}

int primo(int num){
        int cont=0;
        for(int i=1; i<1000; i++){
            if((num%i)==0){
                cont++;
            }
        }
        if(cont==2){
            return 1;
        }else{
            return 0;
        }
}