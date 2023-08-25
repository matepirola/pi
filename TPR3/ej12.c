/*Escriba enunciados for que impriman las siguientes secuencias de valores:
a)	3,8,13,18,23
b)	20,14,8,2,-4
c)	19,27,35,43,51
*/

#include <stdio.h>

int main(void){
    int a = 3, b = 20, c = 19; 
    for(int i = 0; i <= 5; i++){
        printf(" ,%d " , a); 
        a += 5; 
        b -= 6;
        c += 8;  
    }
    return 0; 
}