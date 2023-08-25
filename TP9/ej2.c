/*Escribir la función recursiva suma que reciba un único parámetro de entrada de tipo integer 
y devuelva en su nombre la suma de sus dígitos.
Por ejemplo,  suma( 3498 ) devuelve 24*/

#include <stdio.h>
#include <assert.h>
int suma(int c); 

int main(void) {

  assert(suma(0)==0);
  assert(suma(1)==1);
  assert(suma(12)==3);
  assert(suma(100000)==1);
  assert(suma(123456)==21);
  assert(suma(-123456)==21);
  assert(suma(999999)==54);

  printf ("OK!\n");
  return 0;
}

int suma(int c){
    int d; 
    if(c == 0){
        return 0; 
    }
    d = (c%10); 
    return d + suma(c/10); 
}

