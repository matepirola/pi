/*Escribir una función que, dados dos strings (s1 y s2), elimine de s1 todas las apariciones del primer
caracter de s2.*/

#include <stdio.h>
#include <ctype.h>

void elemin(char * s1, const char * s2);

int main(){

  char s1[] = "habia una vez un pez";
  const char s2[] = "al que madruga dios le ayuda";

  elemin(s1, s2);
  
  printf("%s \n", s1);

}

void elemin(char * s1, const char * s2){
    int t = 0; 
    for(int i = 0; s1[i]; i++){
        if(s1[i] != s2[0]){
            s1[t++] = s1[i]; 
        }
    }
    s1[t] = '\0'; 
} // forma de hacerlo con un for.



void elemin(char * s1, const char * s2){
    int i = 0, j = 0; 
    while(s1[j] != '\0'){
        if(s1[j] != s2[0]){
            s1[i] = s1[j]; 
            i++; 
            j++; 
        }else{
        j++; 
        }
    }
    s1[i] = '\0'; 
} // forma de hacerlo con un while.
