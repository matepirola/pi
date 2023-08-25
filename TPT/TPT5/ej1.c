#include <stdio.h>
int undiamas (int *dia, int *mes, int *año);
int main (void){
    int dia = 3, mes = 4, anio = 7;
    undiamas(&dia, &mes, &anio)


    return 0;
}


int undiamas (int *dia, int *mes, int *año){
    (*dia)++;
    if()
}

static int bisiesto(int anio) {
    int esb=0;
    if((anio%4 == 0 && anio%100!= 0) || anio%400 == 0)
        esb=1;
    return esb;
}

int daytab[2][12] = {{ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
                     { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }};