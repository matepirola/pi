#include "ej8ADT.h"

typedef struct node * Tlist; 

typedef struct Tnode{
    elemType elem;
    struct node * tail;
}TNode; 

typedef struct setCDT{
    size_t size; 
    Tlist first; 
    int (*compare) (elemType, elemType); 
}

setADT newSet(int (*compare)(elemType, elemType)){
    setADT newSet = malloc(sizeof(setCDT)); 
    newSet->first = NULL;
    newSet->compare=compare(elemType, elemType); 
    newSet->size = 0; 
    return newSet;  
}

void freeSet(setADT set){
    TList actual = set->first;
    TList next;
    while(actual != NULL){
        next = actual->tail;
        free(actual);
        actual = next;
    }
    free(set); 
}

int isEmptySet(setADT set){
    if(set->size != 0){
        return 1; 
    }
    return 0; 
}

int setContains(const setADT set, elemType element){
   if(setContRec(set->first, element, compare) == NULL){
        return 0;
   }
   return 1; 
}

static Tlist setContRec(Tlist list, elemType element, int (*compare) (elemType, elemType)){
    if(list == NULL || compare()){
        return NULL;
    }if(compare(list->elem,element) == 0){
        return list; 
    }
    return(list->tail,element,compare); 
}

static Tlist addElemRec(Tlist list, size_t *size, elemType element, int (*compare) (elemType, elemType)){
    if((list == NULL || compare(list->elem, element) < 0) ){
        Tlist aux = malloc(sizeof(TNode)); 
        aux->elem = element; 
        aux->tail = list;  
        (*size)++; 
        return aux; 
    }if(compare(list->elem, element) == 0){
        return list; 
    }
    list->tail = addElemRec(list->tail, size, element, compare); 
    return list;
}

int addElement(setADT set, elemType element){
    size_t old = set->size; 
    addElemRec(set->first, &(set->size), element, compare); 
    if(old != set->size){
        return 1; 
    }
    return 0; 
}


int deleteElement(setADT set, elemType element){
    size_t old = set->size; 
    addElemRec(set->first, &(set->size), element, compare); 
    if(old != set->size){
        return 1; 
    }
    return 0; 
}

static Tlist delteElemRec(Tlist list, size_t *size, elemType element, int (*compare) (elemType, elemType)){
    if(list == NULL){
        return list; 
    }
    if(compare(list->tail->elem, element) == 0){
        Tlist aux = list->tail->tail; 
        free(list->tail); 
        list->tail = aux; 
        (*size)--; 
        return aux; 
    }
    list->tail = deleteElemRec(list->tail, size, element, compare); 
    return list;
}

int sizeSet(const setADT set){
    return set->size;  
}

setADT unionSet(setADT set1, setADT set2){
    setADT aux1 = malloc(sizeof(setCDT)); 
    aux1->first = unionSetRec(set1->first, set2->first, &(aux1->size),  compare); 
    return aux1; 
}

static Tlist unionSetRec(Tlist list1, Tlist list2, size_t * size, int (*compare) (elemType, elemType)){
    if((list1 == NULL) && (list2 == NULL)){
        return NULL; 
    }
    Tlist aux = malloc(sizeof(Tnode)); 
    (*size)++; 
    if((list1 != NULL) && (list2 == NULL)){
        aux->elem = list1->elem; 
        aux->tail = unionSet(list1->tail, NULL, compare); 
    }if((list2 != NULL) && (list1 == NULL)){
        aux->elem = list2->elem; 
        aux->tail = unionSet(NULL, list2->tail, compare); 
    }if(compare(list1->elem, list2->elem) < 0){
        aux->elem = list2->elem; 
        aux->tail = unionSet(list1, list2->tail, compare); 
    }if(compare(list1->elem, list2->elem) == 0){
        aux->elem = list1->elem; 
        aux->tail = unionSet(list1->tail, list2->tail, compare); 
    }
    aux->elem = list1->elem; 
    aux->tail = unionSet(list1->tail, list2, compare); 
}

setADT intersectionSet(setADT set1, setADT set2){
    setADT aux1 = malloc(sizeof(setCDT)); 
    aux1->first = intersecSetRec(set1->first, set2->first, &(aux1->size), compare);     
    return aux1; 
}

static Tlist intersecSetRec(Tlist list1, Tlist list2, size_t * size, int (*compare) (elemType, elemType)){
    if((list1 == NULL) || (list2 == NULL)){
        return NULL; 
    }if(compare(list1->elem, list2->elem) == 0){
        Tlist aux = malloc(sizeof(Tnode)); 
        (*size)++; 
        aux->elem = list1->elem; 
        aux->tail = intersecSetRec(list1->tail, list2->tail, size, compare); 
    }if(compare(list1->elem, list2->elem) < 0){
        intersecSetRec(list1->tail, list2, size, compare)
    }
    intersecSetRec(list1, list2->tail, size, compare);
    return aux; 
}

setADT diffSet(setADT set1, setADT set2){
    setADT aux1 = malloc(sizeof(setCDT)); 

}

static Tlist diffSetRec(Tlist list1, Tlist list2, size_t * size, int (*compare) (elemType, elemType)){
    if((list1 == NULL) && (list2 == NULL)){
        return NULL; 
    }
    
    if((list2 == NULL) && (list1 != NULL)){
        Tlist aux = malloc(sizeof(Tnode)); 
        aux->elem = list1->elem; 
        aux->tail = diffSetRec(list1->tail, NULL, size, compare); 
        return aux; 
    }
    if((list1 == NULL) && (list2 != NULL)){
        Tlist aux = malloc(sizeof(Tnode)); 
        aux->elem = list2->elem; 
        aux->tail = diffSetRec(NULL , list2->tail, size, compare); 
        return aux; 
    }
    if(compare(list1->elem, list2->elem) < 0){      // no olvidar de aumentar el size.
        Tlist aux = malloc(sizeof(Tnode));
        aux->elem = list1->elem:
        aux->tail = diffSetRec(list1->tail, list2, size, compare); 
        return aux;
    }
    
}

