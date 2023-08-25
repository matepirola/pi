#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "../biblio/utillist.h"
 
TList concatenarLista(TList lista1, const TList lista2);
 
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

TList concatenarLista(TList lista1, const TList lista2){
    if(lista2 == NULL){
        return lista1; 
    }if(lista1 == NULL){
        Tlist aux = malloc(sixeof(Tlist));
        aux->elem = lista2 -> elem;
        aux->tail = concatenarLista(lista1, lista2->tail); 
        return aux; 
    }
    lista1->tail = concatenarLista(lista1->tail, lista2); 
    return lista1; 
    
}