/*Hacer una función que reciba dos strings y elimine, de cada string, los caracteres que aparecen en ambos
en la misma posición.*/

#include <stdio.h>

void elemin(char * s1, char * s2) ;

int main(){    // tengo un prblema cuando s1 es muy largo con muchas letras repetidas. 

  char s1[] = "la jermu de frannn";
  char s2[] = "la jermu de keo";


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
    while(s2[i]){
        s2[t++] = s2[i++]; 
    }
    while(s1[i]){
        s1[j++] = s1[i++]; 
    }
    s1[j] = '\0';
    s2[t] = '\0';
}

