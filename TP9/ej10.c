/*Escribir una función recursiva que reciba dos parámetros de tipo string, uno de entrada  y el otro de salida.  
La función debe devolver en el segundo string los caracteres del primero en forma invertida. 
En la primera invocación de esta función recursiva el segundo string debe contener todos los caracteres en cero 
y con el suficiente espacio como para almacenar al primero, pero no debe validar  estas condiciones.*/

#include <stdio.h>
#include <assert.h>
#include <string.h>

int invierte(char * entrada, char * salida); 

int main(void) {

  char s[20] = {0};

  invierte("1234567890", s);
  assert(strcmp(s, "0987654321")==0);

  memset(s, 0, 20);
  invierte("", s);
  assert(strcmp(s, "")==0);

  memset(s, 0, 20);
  invierte("a", s);
  assert(strcmp(s, "a")==0);

  memset(s, 0, 20);
  invierte("ab", s);
  assert(strcmp(s, "ba")==0);
  
  memset(s, 0, 20);
  invierte("abc", s);
  assert(strcmp(s, "cba")==0);

  printf ("OK!\n");
  return 0;
}

int invierte(char * entrada, char * salida){
    
    if(*entrada == 0){
        return 0; 
    }
    int n = invierte(entrada + 1, salida);
    salida[n] = *entrada; 
    return n+1; 
}