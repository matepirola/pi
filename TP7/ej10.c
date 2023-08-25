/*Escribir un programa interactivo para jugar al juego del ahorcado. 
Las palabras que almacena la máquina deben estar guardadas en un arreglo de strings constantes 
y cada vez que se elija jugar, utilizar aleatoriamente alguna de dichas palabras.
Antes de escribir el programa, realizar el diseño y la modularización, 
documentando cada módulo interviniente, tal como se mostró en los ejercicios 8 y 9.
*/

#include <stdio.h>
#include "../biblio/random.h"
#include <string.h>
#define X 6
#define trys 6
int palabraRandom();
void letraUsuario(char palabraMaquina[], int dimPM);
void compareLetra(char palabraMaquina[], char letraUsuario, char respuesta[]);
int largePalabra(char palabraMaquina[]);
void imprimirResp(char respuesta[]);


int main(void){
    char * palabras[X] = {"manzana", "pera", "durazno", "melon", "sandia", "frambuesa"};
    int c = palabraRandom();
    int dimPM = strlen(palabras[c]);
    char * palabraMaquina = malloc(dimPM);
    strcpy(palabraMaquina, palabras[c]);
    
}

int palabraRandom(){
    randomize();
    int c = randInt(0,X - 1);
    return c;
}
void letraUsuario(char palabraMaquina[], int dimPM){
    char respuesta[dimPM];
    for(int i = 0; i < dimPM; i++){
        respuesta[i] = '-';  
    }
   for(int i = 0; i < trys; i++){
    printf("ingerese letra"); 
    char letraUsuario = getchar();
    compareLetra(palabraMaquina, letraUsuario, respuesta);
    imprimirResp(respuesta);
   } 
}
void compareLetra(char palabraMaquina[], char letraUsuario, char respuesta[]){
    int c = 0; 
    for(int i = 0; palabraMaquina[i] != '\0'; i++){
        if(palabraMaquina[i] == letraUsuario){
            respuesta[c++] = letraUsuario;
        }
    }

}

int largePalabra(char palabraMaquina[]){
    int cont = 0;
    for(int i = 0; ; i++){
        cont++;
    }
    return cont; 
}

void imprimirResp(char respuesta[]){
    for(int i = 0; respuesta[i] != '\0'; i++){
        printf("%c " , respuesta[i] );
    }
}

