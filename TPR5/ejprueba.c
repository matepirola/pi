#include <stdio.h>

void funcion(int a){
    a += 3; 
    printf("%d\n" , a); 
}

int main(void){
    int a = 3; 
    funcion( a);
    return 0;  
}
