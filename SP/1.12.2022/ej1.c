/*Implementar la función recursiva deleteN que reciba como únicos parámetros una lista, un
carácter c y un puntero a entero n (con *n >=1) y elimine de la lista las primeras *n apariciones del
carácter c. Al final de la función, en *n quedará el valor de cuántos caracteres no pudo borrar.*/

char * stringcopy(char * s){

 char * aux = NULL; 

 int i = 0; 

 for( i = 0; s[i]; i++){

 if((i % CHUNK) == 0){

 aux = realloc(aux, CHUNK+i);

 }

 aux[i] = s[i]; 

 }

 aux = realloc(aux, i + 1);

 aux[i] = 0; 

}