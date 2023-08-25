/*Implementar una función wordle que resuelva un tablero del juego Wordle
(también conocido como palabra del día). La función recibe:
● Una palabra secreta de COLS caracteres (no es necesario validarlo)
● Una matriz de caracteres de tamaño FILS x COLS donde cada fila es un
intento del usuario para resolver la palabra secreta
● La cantidad de intentos del usuario (un entero menor o igual a FILS)
La función debe dejar en otra matriz una marca V, A o G para cada letra de
cada intento del usuario donde:
● V: VERDE significa que la letra está en la palabra y en la posición
CORRECTA.
● A: AMARILLO significa que la letra está presente en la palabra pero en la
posición INCORRECTA.
● G: GRIS significa que la letra NO está presente en la palabra.
hasta que se marque el primer intento correcto (todas las letras verdes) o se
hayan analizado todos los intentos.
La función debe retornar un entero con el número del primer intento correcto
(todas las letras verdes) o -1 si ningún intento es correcto.
Notar que tanto la palabra oculta como las palabras de los intentos pueden
contener letras repetidas. En ese caso, las pistas son independientes para cada letra
y tienen prioridad: verde tiene mayor prioridad al amarillo.*/


#include <stdio.h>
#include <string.h>

int wordle(char wordSecret[COLS], char mat[FILS][COLS], char mat1[FILS][COLS]){
    int contInt = 1; 
    int contVer = 0; 
    int aux[LETRAS] = {0}; 
    for(int h = 0; h < COLS; h++){
        aux[wordSecret[h]] = 1; 
    }
    for(int i = 0; i < FILS; i++){
        for(int j = 0; j < COLS; j++){
            if((aux[mat[i][j]] == 1) && (mat[i][j] == wordSecret[j])){
                mat1[i][j] = 'V'; 
                contVer++; 
            }if((aux[mat[i][j]] == 1) && (mat[i][j] != wordSecret[j])){
                mat1[i][j] = 'A'; 
            }if((aux[mat[FILS][COLS]] == 0)){
                mat1[i][j] = 'G'; 
            }
            if(contVer == COLS){
                return contInt;
            }else{
                return -1;
            }
            contInt++; 

        }
    }
}