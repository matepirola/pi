/*Escribir una función "palotes" que reciba un entero cant sin signo y envíe en forma recursiva a 
la salida estándar cant  "palotes". Si recibió cero, no imprime nada, si recibió 4, la salida debe ser "||||"  
(las comillas no deben imprimirse)*/


#include <stdio.h>

void palotes(int cant); 

int main(void){
    palotes(10); 
}


void palotes(int cant){
    if(cant == 0){
        return; 
    }else{
        printf("|"); 
    }
    palotes(cant-1); 
}