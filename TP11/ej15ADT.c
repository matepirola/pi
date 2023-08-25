#include "ej15ADT.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct node * Tlist; 

 typedef struct node{
    elemType elem;
    struct node * tail;  
}Tnode;

typedef struct moveToFrontCDT{
    Tlist first; 
    Tlist iterador;
    size_t size; 
}moveToFrontCDT;

moveToFrontADT newMoveToFront(){
    moveToFrontADT new = calloc(1,sizeof(moveToFrontCDT)); 
    return new; 
}

static Tlist addRec(Tlist list, elemType elem, size_t * size, int (*compare) (elemType, elemType)){
    if (list == NULL){
        Tlist aux = calloc(1, sizeof(Tnode)); 
        aux->elem = elem; 
        aux->tail = list; 
        (*size)++; 
        return list; 
    }
    if(compare(list->elem, elem) == 0){
        list->tail = addRec(list->tail, elem, size, compare);  
    }
    return list; 
}

unsigned int add(moveToFrontADT moveToFront, elemType elem){
    size_t old = moveToFront->size; 
    moveToFront->first = addRec(moveToFront->first, elem, &(moveToFront->size), compare); 
    if(old != moveToFront->size){
        return 1; 
    }
    return 0; 
}



unsigned int size(moveToFrontADT moveToFront){
    return moveToFront->size; 
}

void toBegin(moveToFrontADT moveToFront){
    moveToFront->iterador = moveToFront->first; 
}

/* Retorna 1 si hay un elemento siguiente en el iterador, 0 si no */
int hasNext(moveToFrontADT moveToFront){
    if(moveToFront->iterador == NULL){
        return 0;
    }
    return 1; 
}

/* Retorna el siguiente elemento. Si no hay siguiente elemento, aborta */
elemType next(moveToFrontADT moveToFront){
    if(hasNext(moveToFront)){
        elemType elem = moveToFront->iterador->elem;
        moveToFront->iterador = moveToFront->iterador->tail; 
        return elem; 
    }
    exit(1); 
}

/* Retorna una copia del elemento. Si no existe retorna NULL.
** Para saber si el elemento está, usa la función compare. 
** Si el elemento estaba lo ubica al principio.
 */
static Tlist getRec(Tlist list, elemType elem, int (*compare) (elemType, elemType)){
    if(compare(list->tail->elem, elem) == 0){
        Tlist aux = list->tail->tail; 
        free(list->tail); 
        list->tail = aux; 
    }
    if(list == NULL){
        return NULL; 
    }
    list->tail = getRec(list->tail, elem, compare); 
}

elemType * get(moveToFrontADT moveToFront, elemType elem){
    elemType * aux1 = elem; 
    moveToFront->first = getRec(moveToFront->first, elem, compare); 
    Tlist aux = calloc(1, sizeof(Tnode));
    aux->elem = elem; 
    aux->tail = moveToFront->first; 
    moveToFront->first = aux; 
    return (*aux1); 
}
