/*Escribir una función verifica que recibe como único parámetro una "matriz"
de enteros de NxN, donde N es una constante previamente definida, de tipo entero y
múltiplo de 3, por ejemplo 3, 6, 9, etc.
La función debe retornar 1 si se cumplen todas las siguientes condiciones:
● Todos los elementos de la matriz están entre 1 y 3*N inclusive
● Cada submatriz de 3x3 debe tener elementos sin repetir
● Al sumar los elementos de cada submatriz de 3x3 se obtiene el mismo
resultado
Las submatrices son similares a las del juego de Sudoku, comienzan en las
posiciones (0,0), (0,3), (3,0), (3,3), (0,6), etc.*/


int verefica(int mat[][N]){
    int aux[N*N] = {0}; 
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if((aux[mat[i][j]] == 1) || (mat[i][j] <= 1) || (mat[i][j] >= 3*N)){
                return 0; 
            }
            aux[mat[i][j]] = 1;
            
        }
    }
}