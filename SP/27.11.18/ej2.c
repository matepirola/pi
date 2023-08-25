/*El siguiente es un TAD de “multiSet”. Un multi-set es un conjunto de elementos sin orden pero donde cada
elemento puede aparecer más de una vez.*/

typedef struct node * Tlist; 

typedef struct node{
    elemType num; 
    size_t cant;
    struct node * tail;  
}Tnode; 

typedef struct multiSetCDT{
    Tlist multiSet; 
    size_t dim; 
}multiSetCDT; 

/* Retorna un nuevo multiSet de elementos genéricos. Al inicio está vacío */
multiSetADT newMultiSet(){
    return calloc(1, sizeof(multiSetCDT)); 
}

/* Inserta un elemento. Retorna cuántas veces está elem en el conjunto
** luego de haberlo insertado (p.e. si es la primera inserción retorna 1).
*/
static Tlist addRec(multiSetADT list, elemType elem, int compare(elemType elem1; elemType elem2), size_t * aux1){
    if(list == NULL || (compare(list->num, elem)) > 0){
        Tlist aux = malloc(sizeof(Tnode)); 
        aux->num = elem; 
        aux->tail = list; 
        aux->cant = 1; 
        (*aux1) = aux->cant; 
        return aux; 
                                // preguntar que pasa con todo lo anterior a aux; 
    }
    if((compare(list->num, elem)) == 0){
        list->cant++; 
        (*aux1) = list->cant; 
        return list; 
    }
    list->tail = addRec(list->tail, elem, compare, aux1); 
    //return list; no esta de mas?

}

unsigned int add(multiSetADT multiSet, elemType elem){
    size_t aux1; 
    addRec(multiSet->multiSet, elem, compare,  &aux1); 
    if(aux == 1){
        multiSet->dim++; 
    }
    return aux; 
}

/* Retorna cuántas veces aparece el elemento en el multiSet */

static void countRec(Tlist list, elemType elem, int compare(elemType elem1; elemType elem2), size_t * aux1){
    if(list == NULL || compare(list->num, elem) > 0){
        (*aux1) = 0; 
        return; 
    }
    if(compare(list->num, elem) == 0){
        (*aux1) = list->cant; 
        return; 
    }
    countRec(list, elem, compare, aux1); 
}

unsigned int count(const multiSetADT multiSet, elemType elem){
    size_t aux1; 
    countRec(multiSet->multiSet, elem, compare, &aux1); 
    return aux1; 
}

/* Retorna la cantidad de elementos distintos que hay en el multiSet */

unsigned int size(const multiSetADT multiSet){
    return multiset->dim; 
}

/* Elimina una repetición del elemento. Retorna cuántas veces está elem el conjunto
** luego de haberlo borrado (si el elemento no estaba, retorna cero)
*/
static int removeRec(Tlist list, elemType elem, int compare(elemType elem1; elemType elem2)){
    if(list == NULL || compare(list->num, elem) > 0){
        return 0; 
    }
    if((compare(list->num, elem)) == 0){
        if(list->cant == 1){
            Tlist aux = list->tail->tail; 
            free(list->tail); 
            list->tail = aux; 
            return 0; 
        }else{
            list->cant -= 1; 
            return list->cant; 
        }
    }
    removeRec(list, elem, compare); 
}

int remove(multiSetADT multiSet, elemType elem){
    return removeRec(multiSet->multiSet, elem, compare); 
}

/* Elimina todas las apariciones de un elemento. */

void removeAll(multiSetADT multiSet, elemType elem){

}