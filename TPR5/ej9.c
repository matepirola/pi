/*Escribir un programa (en no más de 15 líneas) para encontrar raíces de funciones en un intervalo dado. 
Se deberá recorrer el intervalo a incrementos de 0.001, evaluando la función en cada paso y escribiendo por salida 
estándar los puntos que son raíces. Los extremos del intervalo serán de tipo real y su valor estará dado por constantes 
del programa. 
Tener en cuenta no sólo el caso en el que el resultado de evaluar la función sea cero, sino también aquellos puntos 
en los cuales la función cambia de signo.

	Ejecutar el programa para las siguientes funciones:


Seno(x)		
Coseno(x)		
2x * x3 
Seno(x) + Log(x)	
raiz(2)(x) + e a la x*/

#include <stdio.h>
#include <math.h>
#define INCREMENTO 0.001
#define FUNCION(x) (sin(x))
#define EPSILON 0.0001

int main(void){
    int flag = 0; 
    double min = -(1000), max = 100000; 
    int num2 = (FUNCION(min) > 0 ? 1 : -1), sign; 
    for(double i = min; i <= max; i += INCREMENTO){
        sign = FUNCION(i) > 0 ? 1 : -1; 
        if((fabs(FUNCION(i)) < EPSILON) || (sign != num2)){
            printf(" %f," , i); 
            flag++; 
        }
        num2 = sign; 
    }
    (flag != 0) ? printf("\n") : printf("no tiene raices(al menos en ese rango)\n"); 
    return 0; 
}

   


