/*escribir una funcion que si dos numero son amigos devuelva 1 y sino 0*/

#include <stdio.h>
#include "../biblio/getnum.h"
int numerosAmigos(int num1, int num2); 

int main(void){
    int num1 = getint("ingrese el primer numero:\n"), num2 = getint("ingrese el segundo numero:\n"); 
    printf("%d\n" , numerosAmigos(num1, num2)); 
    return 0; 
}

int numerosAmigos(int num1, int num2){
    int total = (num1 > num2) ? num1 : num2; 
    int a = 0, b = 0; 
    for(int i = 1; i < total; i++){
        if(((num1%i) == 0) && (i < num1)){
            a += i; 
        }
        if(((num2%i) == 0) && (i < num2)){
            b += i; 
        }
    }

    if((b == num1) && (a == num2)){
        return 1;
    }else{
        return 0; 
    }
}
