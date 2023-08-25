/*Escribir una función que, dados dos strings (s1 y s2), elimine de s1 todas las apariciones del primer
caracter de s2.*/

#include <stdio.h>
#include <ctype.h>

void elimina(char s1[], char s2[]);

int main(){

  char s1[] = "habia una vez un pez";
  const char s2[] = "al que madruga dios le ayuda";

  elimina(s1, s2);
  
  printf("%s \n", s1);

}


void elimina(char s1[], char s2[]){
    int d = 0; 
    char x; 
    char c = tolower(s2[0]); 
    for(int i = 0; s1[i]; i++){
        x = tolower(s1[i]); 
        if(x != c){
            s1[d++] = s1[i]; 
        }
    }
    s1[d] = '\0'; 
}