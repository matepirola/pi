/*Una partícula realiza un camino aleatorio dentro de un círculo de acuerdo a la siguientes reglas :
En tiempo t = 0 la partícula está en el centro ( x = 0, y = 0).
La partícula hace un paso aleatorio en una de las cuatro direcciones dada por
x = x - 1
x = x + 1
y = y - 1
y = y + 1
La caminata termina cuando se sale fuera del círculo ( x2 + y2>= r2 ).

	Considerando cada punto como una estructura de componentes cartesianas y 
    teniendo en cuenta que el tiempo se mide con un contador que se incrementa  
    en cada paso de la partícula, escribir un programa que para distintos tamaños de 
    círculos determine experimentalmente la relación entre el tiempo requerido para terminar 
    la caminata y el valor del radio.

Mostrar los valores hallados mediante una tabla cuyas columnas sean:
Radio
Tiempo
Relación (radio / tiempo )*/

#include <stdio.h>
#include "../biblio/random.h"
#include "../biblio/random.h"
#include <math.h>

#define r 2


typedef struct tpos{
    int x;
    int y;
}tpos; 

void caminata(tpos * posicion, int * t, int * rad, int tope); 



int main(void){
    randomize(); 
    tpos posicion; 
    posicion.x = 0;
    posicion.y = 0; 
    int rad = pow(posicion.x,2) + pow(posicion.y,2);
    int tope = pow(r,2); 
    int t = 0; 
    caminata(&posicion, &t, &rad, tope); 
}

void caminata(tpos * posicion, int * t, int * rad, int tope){
    int mov[] = {-1,0,1}; 
    int c, d;
    printf("| radio | timepo | relacion (r/t) |\n");
    while(tope >= *rad){
        c = randInt(0,2);
        d = randInt(0,2); 
        posicion->x += mov[c]; 
        posicion->y += mov[d]; 
        (*t)++;
        (*rad) = pow(posicion->x,2) + pow(posicion->y,2);
        float R = (float)*rad/(float)*t;
        printf("| %d | %d | %f |\n" , *rad, *t, R); 
    }

}