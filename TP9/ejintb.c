/*Escribir una versión recursiva para la función strlen.*/

#include <stdio.h>
int str(char * a);

int main(void){
    char * a = "hola mundo" ;
    int b;
    b = str(a);
    printf("%d" ,b); 
    printf("\n");
}

int str(char * a){
    if((*a) == '\0'){
        return;
    }
    return 1 + str(a+1);

}