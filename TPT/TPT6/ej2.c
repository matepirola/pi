
#include <stdio.h>
#include <assert.h>
 
#define FILAS 7
#define COLS 6
 
#define ERROR (-1)
 
int calculaDireccion(char mat[][COLS], int alto, int ancho, int x, int y);
 
int
main(void) {
    char tablero[][COLS] = {
            {'0', '0', '0', '0', '1', '0'},
            {'X', 'X', '0', '0', '0', '0'},
            {'0', '0', '0', '0', 'X', 'X'},
            {'0', '0', '0', '0', '0', '0'},
            {'0', '0', '0', '0', '0', '0'},
            {'0', '0', '0', 'X', '0', '0'},
            {'1', '0', '0', 'X', 'X', 'X'}
    };
    int res = calculaDireccion(tablero, FILAS, COLS, 4, 1);
    assert(res == 0 || res == 45);
 
    assert(calculaDireccion(tablero, FILAS, COLS, 0, 0) == 0);
    assert(calculaDireccion(tablero, FILAS, COLS, 6, 2) == 90);
    assert(calculaDireccion(tablero, FILAS, COLS, 5, 4) == 135);
    assert(calculaDireccion(tablero, FILAS, COLS, 3, 5) == 180);
    assert(calculaDireccion(tablero, FILAS, COLS, 0, 5) == 225);
 
    res = calculaDireccion(tablero, FILAS, COLS, 3, 2);
    assert(res == 0 || res == 45 || res == 90 || res == 270);
 
    // Jugador fuera del tablero
    assert(calculaDireccion(tablero, FILAS, COLS, FILAS, COLS) == ERROR);
 
    printf("OK!\n");
    return 0;
}

int calculaDireccion(char mat[][COLS], int alto, int ancho, int x, int y){


}

int mas(char mat[][COLS], int alto, int ancho, int x, int y){
    int cont1 = 0, flag = 0, cont2 = 0;
    for( int i = y; i < ancho && flag != 1; i++){
        if(mat[x][i] != '0'){
            flag = 1;
        }
        cont1++;
}
    flag = 0; 
    for (int j = y; j > 0 && flag != 1; j--){
        if(mat[x][j] != '0'){
            flag = 1;
        }
        cont2++
    }
    return (cont1 > cont2)? cont1 : cont2;
}
int por(char mat[][COLS], int alto, int ancho, int x, int y){
    int cont1 = 0, flag = 0, cont2 = 0; 
    for(i = y; i < ancho; i++){
        
    }
}