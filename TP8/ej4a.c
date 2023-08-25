/*Simular un juego de naipes de 52 cartas, en el cual se mezcle el mazo y 
se tomen las 5 primeras cartas, indicando si se obtuvo alguna de las siguientes configuraciones:
PAR:  hay sólo dos de las cinco cartas con igual valor.
PIERNA:  hay sólo tres de las cinco cartas de igual valor.
POKER: hay cuatro cartas con igual valor.*/

#include <stdio.h>
#include "../biblio/random.h"
#define PALOS 4
#define MAX_VALORES 13
#define CARTAS 5

typedef struct tcards{
    int palo;
    int valor;
} tcards;

void mezclar(tcards *mazo, tcards *choose);
int configuraciones(tcards *choose);

enum CONF{PAR = 1, PIERNA, POKER};

int main(void){
    
    randomize();
    //char * palo[] = {"diamante", "corazon", "picas", "trebol"};
    //char * valor[] = {"as", "dos", "tres", "cuatro", "sinco", "seis", "siete", "ocho", "nueve", "diez", "jota", "reina", "rey"};
    tcards carta;
    tcards mazo[PALOS * MAX_VALORES];
    for(int i = 0; i < PALOS; i++){
        for(int j = 0; j < MAX_VALORES; j++){
            carta.palo = i;
            carta.valor = j;
            mazo[(i * MAX_VALORES)+j] = carta;
        }
    }
    tcards choose[CARTAS];
    mezclar(mazo, choose);
    int cont = configuraciones(choose); 

    printf("%d\n" , cont); 

}

void mezclar(tcards *mazo, tcards *choose){
    int c;
    for(int i = 0; i < CARTAS; i++){
        do{
            c = randInt(0, (MAX_VALORES * PALOS)- 1);
        }while(mazo[c].valor == (-1));
            choose[i] = mazo[c]; 
            mazo[c].valor = -1; 
    }
}

int configuraciones(tcards *choose){
    int cont = 0; 
    for(int i = 0; i < CARTAS; i++){
        for(int j = 0; j < CARTAS; j++){
            if((choose[i].valor == choose[j].valor) && (i != j)){
                cont++; 
            }
        }
    }
    switch(cont){
        case 2: 
            cont = PAR;
            break; 
        case 3: 
            cont = PIERNA; 
            break; 
        case 4:
            cont = POKER;
            break;
    }
    return cont; 
}