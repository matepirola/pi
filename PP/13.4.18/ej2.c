/*Escribir una función letras que reciba un string de longitud desconocida y retorne en un string de salida sólo las
letras del alfabeto inglés (sin importar mayúsculas o minúsculas) que forman parte del string recibido, en orden
alfabético.*/
#include <stdio.h>
#include <ctype.h>
#define LETRAS 26
void letra(char * s1, char * s2); 

int main(){


  char  s[LETRAS + 1];

  letra("1x234zxz56 ()0x asa s as as as as as as as as a sa s asa s as sa s h", s);

  printf("%s  \n", s);    



}


void letra(char * s1, char * s2){
    int countUno = 0; 
    int c = 0; 
    int aux[LETRAS] = {0}; 
    for(int i = 0; (s1[i]) && (countUno != LETRAS); i++){
        if(isalpha(s1[i])){
            aux[(tolower(s1[i]) - 'a')] = 1;  
            countUno++; 
        }
    }
    for(int j = 0; j <= LETRAS; j++){
        if(aux[j] == 1){
            s2[c] = j + 'a'; 
            c++; 
        }
    }
    s2[c] = '\0';
    return; 
}

