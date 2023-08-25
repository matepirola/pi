/*Escribir una función que reciba como parámetro de entrada un string y 
retorne 1 si el mismo es palíndromo y 0 en caso contrario. Resolver el problema en forma recursiva*/

#include <stdio.h>
#include <assert.h>
#include <string.h>
int palindromo(char * s);
int capicua(char * s, int dim); 


int main(void) {

  assert(palindromo("a")==1);
  assert(palindromo("")==1);
  assert(palindromo("neuquen")==1);
  assert(palindromo("abba")==1);
  assert(palindromo("12345654321")==1);

  assert(palindromo("abab")==0);
  assert(palindromo("123456")==0);
  

  printf ("OK!\n");
  return 0;
}

int palindromo(char * s){
    if(!(*s)){
        return 1; 
    }else if(*s == NULL){
        return 1; 
    }
    int dim = strlen(s);
    return capicua(s,dim); 
}


int capicua(char * s, int dim){
    if(dim <= 1){
        return 1; 
    }if(s[0] != s[dim-1]){
        return 0; 
    }return capicua(s+1, dim - 2);
}