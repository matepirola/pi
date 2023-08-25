/*Escribir una función armaFilas que recibe una matriz de enteros de N filas y M columnas (N y M son
constantes simbólicas ya definidas), y un vector de dimensión N.
La función debe armar los números que se forman con cada fila y guardarlos en el vector.
Si hubiera números negativos o de más de una cifra en una fila, no se completa el armado de ese
número, pero se sigue con la próxima fila.
La función retorna en su nombre la dimensión final del vector de números.*/


void armaFilas(mat[N][M], vec[N]){
    int count = 0; 
    for(int i = 0; i < N; i++){
        int flag = 0; 
        int num = 0; 
        for(int j = 0; j < M; j++){ 
            if(mat[i][j] >= 0 && mat[i][j] <= 9){
                num *= 10; 
                num +=  mat[i][j]; 
            }else{
                flag = 1; 
            }
        }
        if(flag == 0){
            vec[count++] = num; 
        }
    }
    return count; 
}