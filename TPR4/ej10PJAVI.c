/*La siguiente función intenta ser una instrumentación del algoritmo de Euclides para calcular el MCD de dos números, 
pero no siempre da el resultado correcto. Indicar errores y corregirlos para que funcione correctamente.*/

#include <stdio.h>
int dcm(int a, int b); 


int main(void){
    int a = 24, b =20 , c; 
    c = dcm(a,  b); 
    printf("%d\n" , c); 

}

int 
dcm (int a, int b)
{
	int auxi = 1;


	while (auxi>0)
	{	
        auxi = b;
        a = b;
        auxi = a % b;
    }


	return a;
}
