/*Escribir un programa (en no más de 10 líneas) que calcule el valor de la constante matemática e utilizando 
la fórmula   e = 1 + 1/1!  + 1/2! + 1/3! +...  e imprima una tabla que indique cantidad de términos de la serie y 
el resultado parcial, con el siguiente formato:
	N		e
	1		1
	2		2
	3		2.5

¿Qué criterio utilizaría para detener la secuencia? 
( No usar cantidad fija de términos ni preguntarle al usuario la cantidad de términos. 
Tampoco tendría sentido comparar con el verdadero valor de e).*/

#include <stdio.h>
#define EPSILON 0.00001

int main(){
  int i, varGuardada, factorial = 1; 
  float e, a = 1.0;
  puts("\t\tN\t|\te\n\t-----------------------------------");
  for ( i=0; (a>EPSILON); i++ ){
    if (i==0){
        e=1.0;
        printf("\t\t%d\t|\t%f\n", (i+1), e);
    }else{
        factorial *= i;
        a = (1.0/(float)factorial);
        e += a;
        printf("\t\t%d\t|\t%.20f\n", (i+1), e);
    }
    varGuardada = e;
    }
}