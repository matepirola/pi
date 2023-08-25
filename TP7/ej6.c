/*Escribir un programa para desarrollar el juego Mastermind descrito por las siguientes reglas:  

La computadora construye un conjunto aleatorio de X dígitos distintos (para X usar una constante simbólica). 
Sólo se usan los dígitos del 1 al 9
Se le  pide ingresar al usuario el nivel en que quiere jugar. Según esto se trabajará con una tolerancia de hasta N pasos, 
dentro de los cuales si no logra ganar el juego se termina automáticamente. 
El jugador entra un conjunto de X dígitos distintos por teclado. 
Si el número propuesto por el jugador coincide con el que generó la máquina o la cantidad de chances excedió el número tope N, 
el juego finaliza; sino el programa debe informarle cuántos dígitos están BIEN (son correctos y están en su lugar) y 
cuántos son REGULARES (son correctos pero están fuera de lugar) y se vuelve a ejecutar el paso anterior. 
Así se va guiando al jugador hasta que adivine el número.
*/
#include <stdio.h>
#include "../biblio/getnum.h"
#include "../biblio/random.h"
#include <math.h>
#define X 5
int generarAleatorio(int X);
int nivel();
void leerNumero(int X, int numUsuario[]);

int main(void){
    int icognita[X];
    generarAleatorio(icognita); // genero el numero aleatorio.
    int numUsuario[X];
    leerNumero(X, numUsuario); // el usuario crea un numero y se guarda en un vector constante.
    generarAleatorio(X); 
    int level = nivel(); 
    return 0; 
}

int generarAleatorio(int icognita[]){
    int aux[] = {1,2,3,4,5,6,7,8,9};
    int cambio, al;
    for (int i=0; i<X; i++){
    al = randInt(i+1,9);
    cambio = aux[i];
    aux[i] = aux[al];
    aux[al] = cambio;
    icognita[i] = aux[i];
  }
}

int nivel(){
    int nivel;
    do{
        nivel = getint("ingrese cnatidad de intentos que quiere (entre 1 y 10): ");
    }while(nivel < 1 || nivel > 10);
}

void leerNumero(int X, int numUsuario[]){
    int num = getint("ingrese numero de %d digitos todos distintos: " , X);
    int exp = X - 1; 
    for(int i = 0; i < X; i++){
        int a; 
        a = num/pow(10,(exp - i)); // ver como hacer para que no repita numeros el usuario.
        a %= 10; 
        int numUsuario[i] = a; 
    }
}
    
void coincideNumero(int numUsuario[], int incognita[]){
    int bien = cantidadBien(numUsuario[], incognita[]);
    int regular = cantidadRegular(numUsuario[]; incognita[]);
    return printf("bien = %d\n regular %d" , bien, regular);
    if(bien == X){
        return 1;
    }
}

int cantidadBien(int numUsuario[], int incognita[]){
    int contBien = 0; 
    for(int i = 0; i < X; i++){
        if(numUsuario[i] == incognita[i]){
            contBien++;
        }
    }
    return contBien;
}

int cantidadRegular(int numUsuario[], int incognita[]){
    int contRegular = 0;
    for(int i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            if(numUsuario[i] == incognita[j] && j!=i){
                contRegular++;
            }
        }
    }
}