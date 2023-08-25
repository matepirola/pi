/*Extender el punto anterior de modo tal que jueguen la computadora contra el 
usuario hasta que se acabe el mazo o el usuario decida no seguir jugando. 
Acumular los puntajes obtenidos por ambos jugadores considerando que el ganador 
de cada mano obtiene 1 punto y solo se considera empate (un punto para cada uno) 
una mano donde ambos jugadores tienen la misma configuración y con la misma figura 
(de coincidir sólo en configuración, gana aquella de figura mayor).*/

#include <stdio.h>
#include "../biblio/random.h"
#include "../biblio/getnum.h"
#define PALOS 4
#define MAX_VALORES 13
#define CARTAS 5
#define PLAYERS 2
#define MAX_MEZCLADAS 4

typedef struct tcards{
    int palo;
    int valor;
} tcards;

void mezclar(tcards *mazo, tcards *choose);
int configuraciones(tcards *choose);
void compare(int aux1, int  aux2, int *puntos1, int *puntos2);
enum CONF{PAR = 1, PIERNA, POKER};

int main (void){
    randomize();
    tcards cartas;
    tcards mazo[PALOS * MAX_VALORES];
    for(int i = 0; i < PALOS; i++){
        for(int j = 0; j < MAX_VALORES; j++){
            cartas.palo = i;
            cartas.valor = j;
            mazo[(i * MAX_VALORES)+j] = cartas;
        }
    }
    tcards choose1[CARTAS];
    tcards choose2[CARTAS]; 
    int puntos1 = 0, puntos2 = 0; 
    int cont1, cont2; 
    for(int h = 0; h < MAX_MEZCLADAS; h++){
        int eleccion = getint("presione uno (1) si desea continuar jugando:");
        if(eleccion == 1){
            mezclar(mazo,choose1);
            mezclar(mazo,choose2);
            cont1 = configuraciones(choose1);
            cont2 = configuraciones(choose2);
            compare(cont1, cont2, &puntos1, &puntos2);
            printf("puntos maquina: %d, puntos usuario: %d \n" , puntos1, puntos2);
        }else{
            return 1; 
        }
    }
    if(puntos1 > puntos2){
        printf("la mauqina gano con %d puntos\n" , puntos1);
    }else{
        printf("el ganador es el usuario con %d puntos\n" , puntos2);
    }

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

void compare(int aux1, int  aux2, int *puntos1, int *puntos2){
    if(aux1 > aux2){
        (*puntos1)++;
    }else if(aux1 == aux2){
        (*puntos1)++;
        (*puntos2)++;
    }
    else{
        (*puntos2)++;
    }

}
