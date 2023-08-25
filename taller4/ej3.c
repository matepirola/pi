


#include <stdio.h>
#include "../biblio/random.h"
#include <ctype.h>
#define MIN 1
#define MAX 256

int main(void){
    randomize(); 
    char mayus = randInt('A', 'Z'); 
    int N = randInt(MIN, MAX), cont = 0, c, apar = 0; 
    while( (c = getchar()) != EOF && cont != N){
        if(mayus == toupper(c)){
            apar++; 
        }
        cont++; 
    }
    printf("N = %d\n letra = %c\n apariciones = %d\n" , N, mayus, apar); 
}