/*Realizar una función recursiva concatenarLista que reciba dos listas y agregue al final dela primer lista 
una copia de todos los elementos de la segunda lista. La función deberetornar el puntero al primer nodo de la lista resultante. 
No definir funciones ni macrosauxiliares.La segunda lista no debe ser modificada.*/

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "../biblio/utillist.h"
 
TList concatenarLista(TList l1, const TList l2);
 
int
main(void) {
    int v1[] = {4,3,7};
    TList l1 = fromArray(v1, 3);
    int v2[] = {3,2,6};
    TList l2 = fromArray(v2, 3);
    int v1yv2[] = {4,3,7,3,2,6};
    TList l1yl2 = concatenarLista(l1, l2);
    assert(checkElems(l1yl2, v1yv2, 6));
    freeList(l1yl2);
    freeList(l2);
 
    TList l3 = NULL;
    TList l4 = fromArray(v1yv2, 6);
    TList l3yl4 = concatenarLista(l3, l4);
    assert(checkElems(l3yl4, v1yv2, 6));
    freeList(l3yl4);
    freeList(l4);
 
    printf("OK!\n");
    return 0;
}

TList concatenarLista(TList l1, const TList l2){
    if((l1 == NULL) && (l2 == NULL)){
        return NULL;
    }
    if(l2 == NULL && l1 != NULL){
        TList aux = malloc(sizeof(TNode)); 
        aux->elem = l1->elem; 
        aux->tail = concatenarLista(l2->tail, NULL); 
        return aux; 
    }if(l1 == NULL && l2 != NULL){
        TList aux = malloc(sizeof(TNode)); 
        aux->elem = l2->elem; 
        aux->tail = concatenarLista(NULL, l2->tail); 
        return aux; 
    }else{
        
    }
}