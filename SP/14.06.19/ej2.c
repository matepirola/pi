



typedef struct elems{
    elemType elem; 
    size_t flag; 
}elems; 

typedef struct mapCDT{
    elems * keys; 
    size_t maxDim; 
    size_t cant; 
}mapCDT;

/* Retorna un vector con todos los valores almacenados */


elemType * values(const mapADT v){
    elemType * aux = malloc((v->cant) * sizeof(elemType)); 
    size_t count; 
    for(int i = 0; i < v->maxDim; i++){
        if(v->keys[i].flag == 1){
            aux[count++] = v->keys[i].elem; 
        }
    }
    return aux; 
}


/* Retorna el elemento asociado a la clave key
** Si no había un elemento asociado a esa clave retorna basura y en errno
** el valor ENODATA
*/

elemType get(const mapADT m, size_t key){
    if(m->maxDim > key){
        if(m->keys[key].flag == 1){
            return m->keys[key].elem; 
        }else{
            ERRNO = ENODATA; 
            return m->keys[key].elem; 
        }
    }
}

/* Elimina una clave. Es equivalente a decir que para esa clave no hay ningún
* valor asociado
*/

void deleteKey(mapADT m, size_t key){
    if(m->maxDim > key){
        if(m->keys[key].flag == 1){
            m->keys[key].flag = 0; 
        }
    }
    return; 
}

/* Libera todos los recursos reservados por el TAD */

void freeMap(mapADT m){
    if(m != NULL){
        for(int i = 0; i < m->maxDim; i++){
            free(m->keys[i]); 
        }
        free(m); 
    }
    return; 
}