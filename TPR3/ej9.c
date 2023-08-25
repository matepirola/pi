/*write a program to count blanks, tabs and new lines.*/

#include <stdio.h>


int main(void){
    char a;  
    int bcounts = 0, tcounts = 0, lcounts = 0;

    while((a = getchar()) != EOF){
        if(a == ' '){
            bcounts++; 
        }
        if(a == '\n'){
            lcounts++; 
        }
        if( a == '\t'){
            tcounts++; 
        }
    }
    printf("espacios = %d, tabs = %d y new lines = %d. \n" , bcounts, tcounts, lcounts); 
}



int main(void){
    char a;  

    while((a = getchar()) != EOF){
        printf("%c\n" , a); 
    }
    return 0;    
}
