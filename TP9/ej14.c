/*Similar al ejercicio 12 pero el string contiene únicamente paréntesis 
y debe retornar cero sólo si los paréntesis están apareados. 
Consideramos que los paréntesis de una expresión están apareados si para cada 
paréntesis de apertura hay uno de cierre en una posición posterior. 
No definir macros ni funciones auxiliares.*/


#include <stdio.h>
#include <assert.h>

int apareados(const char *texto);

int main(void) {

  assert(apareados("")==0);
  assert(apareados("()")==0);
  assert(apareados("(())()(()())")==0);
  assert(apareados("((((()))))")==0);

  assert(apareados("(")!=0);
  assert(apareados(")")!=0);
  assert(apareados("(")!=0);
  assert(apareados("())")!=0);
  assert(apareados("()(")!=0);
  assert(apareados("((()))())(")!=0);
  
  printf ("OK!\n");
  return 0;
}

int apareados(const char *texto){
    if(*texto == 0){
        return 0; 
    }
    int i = apareados(texto + 1); 
    int aux;
    if(i<0){
        return i; 
    }
    if(*texto ==')'){
        aux = 1; 
    }
    else {
        aux = -1; 
    }
    return i + aux;  
    
}