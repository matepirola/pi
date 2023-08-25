/*
Leer dos caracteres desde la entrada estándar  e imprimir por salida estándar  si son iguales, 
si el primero es mayor o si el primero es menor, teniendo en cuenta su valor ASCII. 
(En no más de 15 líneas).
*/
#include <stdio.h>
int main(void){
char a = getchar();
char b = getchar();
if(a == b){
    printf("%c es igual a %c" , a,b);
}else{
a > b ? printf("%c es mayor a %c. " , a, b) : printf("%c es menor a %c. " , a ,b);
}
return 0;
}