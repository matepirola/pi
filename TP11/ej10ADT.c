
#include "ej10ADT.h"
#include <stdlib.h>
#include <stdio.h>


typedef struct node * Tlist; 


typedef struct node{
    elemType elem;
    struct node * tail;
    size_t count; 
}TNode; 


typedef struct bagCDT{
    Tlist list; 
    size_t size; 
}bagCDT; 

bagADT newBag(){
    bagADT new = calloc(1, sizeof(bagCDT)); 
    return new; 
}

static Tlist addRec(Tlist list, elemType elem, size_t * count, int (*compare) (elemType, elemType)){
    if(list == NULL || compare(list->elem, elem) > 0){
        Tlist aux = malloc(sizeof(TNode)); 
        aux->elem = elem; 
        aux->tail = list; 
        aux->count = 1; 
        return aux; 
    }
    if(compare(list->elem, elem) < 0){
        list->tail = addRec(list->tail, elem, count, compare); 
    }
    (list->count)+= 1; 
    (*count) = list->count; 
    return list; 
}

unsigned int add(bagADT bag, elemType elem){
    size_t count = 1; 
    addRec(bag->list,elem, &(count), compare);
    if(count == 1){
        bag->size += 1; 
    }
    return count; 
}

static void countRec(Tlist list, elemType elem, size_t * count, int (*compare) (elemType, elemType)){
    if(list == NULL){
        return; 
    }
    if(compare(list->elem, elem) == 0){
        (*count) = list->count; 
        return; 
    }
    if(compare(list->elem, elem) >0){
        countRec(list->tail,elem,count,compare); 
    }
    return; 
}


unsigned int count(const bagADT bag, elemType elem){
    size_t count = 0;
    countRec(bag->list, elem, &count, compare); 
    return count;  
}

unsigned int size(const bagADT bag){
    return bag->size; 
}

static Tlist mostPopularRec(Tlist list){
    if(list->tail = NULL){
        return list; 
    }
    Tlist m = mostPopularRec(list->tail); 
    if(m->count < list->count){
        return list;
    }
    return m; 
     

}

elemType mostPopular(bagADT bag){
    if(bag == NULL){
        exit(1); 
    }
    Tlist aux = mostPopularRec(bag->list); 
    return aux->elem; 
}

void freeBag( bagADT bag){
    if(bag->list != NULL){
        free(bag->list);
    }
    free(bag); 
}