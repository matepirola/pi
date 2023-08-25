/*Hacer una función que reciba dos strings y elimine, de cada string, los caracteres que aparecen en ambos
en la misma posición.*/
#include <stdio.h>

void elemin(char * s1, char * s2) ;

int main(){

  char s1[] = "fraccion";
  char s2[] = "tractor";


  elemin(s1, s2);

  printf("%s\n", s1);
  printf("%s\n", s2);

}


void elemin(char * s1, char * s2){
    int i =0, j = 0, t = 0; 
    while(s1[i] && s2[i]){
         if(s1[i] != s2[i]){
             s1[j++] = s1[i];
             s2[t++] = s2[i];
        }
        i++;
    }
    while(s1[i]){
        s1[j++] = s1[i++]; 
    }
    while(s2[i]){
        s2[t++] = s2[i++]; 
    }
    s1[j] = '\0';
    s2[t] = '\0';
}