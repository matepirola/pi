/*realice programa en c que asigne memoria para los N votos otorgados a los 3 candidastos a presidente de la 
Republica aregntina e imprimir el numero del candidato ganador y perdedor con sus respectivos cantidad de votos.*/

#include <stdlib.h>
#include <stdio.h>
#include "../biblio/getnum.h"
#define votos 15

void votosMilei(int **milei, int contMilei);
void votosCristina(int **cristina, int contCristina);
void votosBullrich(int **bullrich, int contBullrich);
void imprimir(int **v, int a);

int main(void) {
    int contMilei = 0, contCristina = 0, contBullrich = 0;

    for (int i = 0; i < votos; i++) {
        int c = getint("Ingrese su presidente por eleccion: ");

        if (c == 1) {
            contMilei++;
        } else if (c == 2) {
            contCristina++;
        } else if (c == 3) {
            contBullrich++;
        } else {
            return 1;
        }
    }

    int *milei = NULL;
    int *cristina = NULL;
    int *bullrich = NULL;

    votosMilei(&milei, contMilei);
    votosCristina(&cristina, contCristina);
    votosBullrich(&bullrich, contBullrich);

    imprimir(&milei, contMilei);
    imprimir(&cristina, contCristina);
    imprimir(&bullrich, contBullrich);

    free(milei);
    free(cristina);
    free(bullrich);

    return 0;
}

void votosMilei(int **milei, int contMilei) {
    *milei = malloc(contMilei * sizeof(int));
    for (int i = 0; i < contMilei; i++) {
        (*milei)[i] = i + 1;
    }
}

void votosCristina(int **cristina, int contCristina) {
    *cristina = malloc(contCristina * sizeof(int));
    for (int i = 0; i < contCristina; i++) {
        (*cristina)[i] = i + 1;
    }
}

void votosBullrich(int **bullrich, int contBullrich) {
    *bullrich = malloc(contBullrich * sizeof(int));
    for (int i = 0; i < contBullrich; i++) {
        (*bullrich)[i] = i + 1;
    }
}

void imprimir(int **v, int a) {
    for (int i = 0; i < a; i++) {
        printf("%d ", (*v)[i]);
    }
    printf("\n");
}
