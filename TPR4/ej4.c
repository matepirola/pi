/*Resolver el problema 4-14 del K&R. Utilizar la macro definida en un programa que realice intercambio de variables. 
(En no más de 5 líneas)*/

#include <stdio.h>
#define SWAP(t , x, y) (c = x; x = y; y = x)

int main(void){
    int x = 2, y = 3; 
    SWAP(int, x, y); 
    printf("%d  %d" , x, y); 
}