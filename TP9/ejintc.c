/*Escribir una versión recursiva de la función strchr.*/

#include <stdio.h>

int strc(char * s, char d);

int main(void){
    char * s = "hola mmmundo"; 
    char d = 'm'; 
    int c = strc(s, d); 
    printf("%d", c); 
    printf("\n"); 
}

int strc(char * s, char d){
    if((*s) == '\0'){
        return;
    }else if((*s) == d){
        return 1 + strc((s+1), d); 
    }else{
        strc((s+1), d); 
    }
}