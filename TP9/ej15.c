/*En muchos supermercados se ordena la mercadería de manera especial, para capturar la atención del comprador.  
Un ejemplo concreto es el de ordenar latas en forma de "pirámide", de manera tal que arriba de todo haya una sola lata, 
debajo 4, luego 9 y así sucesivamente.*/

#include <stdio.h>
#include <assert.h>
#include <math.h>

void piramide(int *latas, int *h);

int main(void) {

  int h=0, latas=10;
  piramide(&latas, &h);
  assert(latas==5 && h==2);

  h=0, latas=55;
  piramide(&latas, &h);
  assert(latas==0 && h==5);

  h=0, latas=1;
  piramide(&latas, &h);
  assert(latas==0 && h==1);

  h=0, latas=2;
  piramide(&latas, &h);
  assert(latas==1 && h==1);

  h=0, latas=3;
  piramide(&latas, &h);
  assert(latas==2 && h==1);

  h=0, latas=4;
  piramide(&latas, &h);
  assert(latas==3 && h==1);     

  h=0, latas=5;
  piramide(&latas, &h);
  assert(latas==0 && h==2);

  printf ("OK!\n");
  return 0;
}

void piramide(int *latas, int *h){
    (*h)++; 
    if(*latas < pow(*h,2)){
        (*h)--; 
        return;
    }
    (*latas) -=  pow(*h, 2);
    piramide(latas, h);    
}