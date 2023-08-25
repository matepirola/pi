#ifndef complejosADT.h
#define complejosADT.h

#include <stdio.h>
#include <stdlib.h>

typedef struct complejoCDT * complejoADT;

int parteRealComp(complejoADT num); 

int parteImagComp(complejoADT num); 

complejoADT sumaComp(complejoADT num1, complejoADT num2); 

complejoADT nuevoComp(int a, int b); 

void liberaComp(complejoADT num); 

#endif
