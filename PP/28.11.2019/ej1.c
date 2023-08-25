/*Escribir una función elimina que recibe un string y elimina las primeras apariciones de los
caracteres repetidos, dejando sólo la última aparición.
b) Escribir un ejemplo de invocación que asegure que el programa aborta en ejecución. Explicar por
qué aborta.
*/


#define LETRAS


void elimina(char s[]){
  int vecAp[MAX_CHARS] = {0};
  int k=0;
  int i;
  for(i=0; s[i]!='\0'; i++){
    vecAp[s[i]]++; //vecAp[s[i]] = i;  Guardar la última aparición del carácter
  }
  for(i=0; s[i]!='\0'; i++){
    if(vecAp[s[i]] > 1){
      vecAp[s[i]]--;
    }else if(vecAp[s[i]]==1){
      s[k++] = s[i];
    } 
  }
  s[k] = '\0';
}

/* inciso b:
si le paso un char * s aborta en ejecucion porque no esta definida la memoria.
*/