/*La siguiente función recibe como parámetros de entrada las horas y los minutos que representan el momento de 
ingreso al trabajo de un empleado, y devuelve 1 ( verdadero ) si el empleado llegó a horario y 0 ( falso ) si llegó tarde. 
Las constantes ENT_HORA y ENT_MINUTOS están definidas fuera de la función e indican el horario esperado de entrada al trabajo.
Testearla, y de no funcionar correctamente, corregirla.*/
#include<stdio.h>
#define ENT_HORA 8
#define ENT_MINUTOS 30
int llegaTemprano(const int hora, const int minutos); 

int main(void){
    int a = 12, b = 15; 
    int c = llegaTemprano(a, b); 
    printf("%d" , c); 

}

int llegaTemprano(const int hora, const int minutos){
	return (hora <= ENT_HORA && minutos <= ENT_MINUTOS);
}
