/*write a program to copy its input to its output, replacing each string of one or more blanks 
by a single blank*/

#include<stdio.h>

/*int main(void){
    int text, cont = 0; 
    while( (text = getchar()) != EOF){
        while(text == ' '){
        cont++;
        if(cont > 1){
            printf("%c" , text);
        }
        cont = 0;
    }
}

}*/



int main(){

  int c, varGuardada, cont = 0;

  while ( (c = getchar()) != EOF ){

  
    printf("%c", (c==' ' && varGuardada==' ') ? 0 : c );

    varGuardada = c;

  }
}