/*Escribir un programa que ofrezca un menú con las siguientes opciones:
    (1) Simplificar una fracción; 
    (2) Sumar dos fracciones; 
    (3) Terminar la ejecución; 

	   Si se elige la primera opción se le solicitará numerador y denominador de la fracción y se imprimirá la fracción 
       simplificada (algunos de ellos podrían ser negativos). Si se opta por la segunda, se le solicitará dos fracciones 
       y se imprimirá la suma de las mismas, también simplificada. Obviamente con la tercera opción finaliza la ejecución 
       del mismo. Escribir una función para cada item del menú. (No más de 20 líneas para main y no más de 10 líneas para las 
       funciones del menú).
	Pista: Escribir y usar la función DivisorComunMaximo.
*/

#include <stdio.h>
#include "../biblio/getnum.h"
int dcm (int a, int b); 
void simplificador(int denominador, int divisor);
void suma(int denominador1, int divisor1, int denominador2, int divisor2);  

int main(void){
    int selector = 0; 
    while(selector != 3){
        selector = getint("ingrese la operacion que desea hacer:\n (1)\n (2)\n (3)\n ----------------------------\n"); 
        if(selector == 1){
            int denominador = getint("ingrese el denominador:\n"), divisor = getint("ingrese el dividor:\n"); 
            (divisor != 0) ? simplificador(denominador, divisor) : printf("el divisor debe ser distinto de 0\n"); 
        }else if(selector == 2){
            int denominador1 = getint("ingrese el denominador de la primera fraccion:\n"), divisor1 = getint("ingrese el divisor de la primera fraccion:\n");
            int denominador2 = getint("ingrese el denominador de la primera fraccion:\n"), divisor2 = getint("ingrese el divisor de la segunda fraccion:\n"); 
            suma(denominador1, divisor1, denominador2, divisor2); 
        }else if( selector == 3){
            printf("finalizo la ejecucion\n"); 
            return 0; 
        }else{
            printf("no es una opcion valida"); 
        }
    }
}

void simplificador(int denominador, int divisor){
    int dem = (denominador > divisor) ? dcm(denominador, divisor) : dcm(divisor, denominador); 
    denominador /= dem; 
    divisor /= dem; 
    printf("fraccion simplificada: %d/%d\n" , denominador, divisor); // hay un problema cuando no tiene  un divisor en comun.
}
// no respeta demasido el front con el back preguntar a javi.

void suma(int denominador1, int divisor1, int denominador2, int divisor2){
    if(divisor1 == divisor2){
        printf("%d/%d\n" ,(denominador1 + denominador2) ,divisor1); 
    }else{
        int newden1 = divisor1 * denominador1, newden2 = denominador2 * divisor2; 
        int newdiv = divisor1 * divisor2; 
        printf("%d/%d" , (newden1 + newden2), newdiv);   
    }
}


int dcm(int coc, int div){

  int temp;
  while (div != 0) {

    temp = coc % div;
    coc = div;
    div = temp;

  }
  
  return coc;

}