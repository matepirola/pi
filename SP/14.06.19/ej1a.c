/*escribir una funcion recursiva removeOdd que , recibiendo unicamente una lista, elimine de la musma todos los elementos
en posicion impar tomando como la posicion 0 un numero par.*/

void removeOdd(Tlist list){
    if(list == NULL || list->tail == NULL){
        return; 
    }
    Tlist aux = list->tai->tail; 
    free(list->tail); 
    list->tail = aux; 
    list->tai = removeOdd(list->tail); 
}


void removeRepeated(Tlist list){
    if(list == NULL || list->tail == NULL){
        return;
    }
    if(list->elem == list->tail->elem){
        Tlist aux = list->tail->tail; 
        free(list->tail); 
        list->tail = aux; 
    }
    list->tail = removeRepeated(list->tail); 
}