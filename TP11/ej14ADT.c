typedef struct node * Tlist; 

typedef struct node{
    elemType elem; 
    struct node * tail; 
}Tnode; 

typedef struct listCDT{
    Tlist listOrd; 
    Tlist listDes;
    Tlist itOrd; 
    Tlist itDes; 
    Tlist lastDes; 
    int (*compare) (elemType, elemType); 
}


 
/* Retorna una lista vacía.
*/
listADT newList(int (*compare) (elemType e1, elemType e2)){
    listADT new = calloc(1,sizeof(listCDT)); 
    new->compare = compare; 
    return new; 
}


static Tlist addRec(Tlist list, elemType elemn int (*compare) (elemType, elemType)){
    if(list == NULL || (compare(list->elem, elem) > 0)){
        Tlist aux = malloc(sizeof(Tnode)); 
        aux->elem = elem; 
        aux->tail = list; 
        return aux; 
    }
    if((compare(list->elem, elem)) < 0){
        list->tail = addRec(list->tail,elem, compare); 
    }
    return list; 
}



void add(listADT list, elemType elem){     //preguntar a javi
    TList aux = calloc(1, sizeof(Tnode));
    aux->elem = elem;
    if (list->listDes == NULL){
        list->listDes = aux;
    }else{
        list->lastDes->tail = aux; // esta parte no entiendo.
    }
    list->lastDes = aux;
    list->listOrd = addRec(list->listOrd, elem);

}

void toBegin(listADT list){
    list->itDes = list->listDes; 
}


int hasNext(listADT list){
    if(list->itDes == NULL){
        return 0; 
    }
    return 1; 
}

elemType next(listADT list){
    if(hasNext(list)){
        elemType aux = list->itDes->elem; 
        list->itDes = list->itDes->tail; 
        return aux; 
    }
    exit(1); 
}

void toBeginAsc(listADT list){
    list->itOrd = list->listOrd; 
}

int hasNextAsc(listADT list){
    if(list->ittDes == NULL){
        return 0; 
    }
    return 1; 
}

elemType nextAsc(listADT list){
    if(hasNexAsc(list)){
        elemType aux = list->itDes->elem;
        list->itDes = list->itDes->tail; 
        return aux; 
    }
    exit(1);
}

void freeList(listADT list){

    TList actual = list->listOrd;
    TList next;

    while(actual != NULL){
        next = actual->tail;
        free(actual);
        actual = next;
    }

    actual = list->listDes;

    while(actual != NULL){
        next = actual->tail;
        free(actual);
        actual = next;
    }

    free(list);
}
