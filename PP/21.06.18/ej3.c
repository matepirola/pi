/*Escribir una función que, dados un string y una letra, elimine del string la aparición de esa letra (sin
importar si es minúscula o mayúscula) y los dos caracteres siguientes a la misma. Si el caracter recibido no
es una letra, no debe modificar el string.*/
#include <stdio.h>
#include <ctype.h>

void mofdica(char * s1, char c); 

int main(){

  char s1[] = "El sol sale por el este";
  char c = 'e';

  mofdica(s1, c);
  
  printf("%s \n", s1);

}


void mofdica(char * s1, char c){
    int count = 0, count1 = 0;
    char x = tolower(c); 
    while(s1[count1] != 0){
        if(tolower(s1[count1]) != x){
            s1[count] = s1[count1]; 
            count++; 
            count1++; 
        }else{
            count1++; 
            if(s1[count1] == 0){
                s1[count] = '\0'; 
                return; 
            }
            count1++; 
            if(s1[count1] == 0){
                s1[count] = '\0'; 
                return; 
            }
            count1++; 
        }
    }
   
}













