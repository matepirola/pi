



#define CHUNK 10


typedef struct element{
    size_t flag; 
    elemType valor; 
}element; 

typedef struct vectorCDT{
    size_t size; 
    int (*compare) (elemType, elemType); 
    element * vec; 
    size_t count;
}


vectorADT newVector(int (*compare)(elemType source, elemType target)){
    vectorADT new = calloc(1, sizeof(vectorCDT)); 
    new->compare = compare; 
    return new; 
}

static void putRec(element * vec, elemType * elems, size_t dim, size_t index, size_t * agregados, size_t * count){
    if(dim == 0){
        return; 
    }
    if((vec[index].flag) == 0){
        vec[index].valor = elem[(*agregados)];
        vec[index].flag = 1; 
        (*agregados)++; 
        (*count)++;
    }
    putRec(vec, elems, dim-1 , index+1, agregados, count); 
}

size_t put(vectorADT v, elemType * elems, size_t dim, size_t index){
    size_t agregados = 0; 
    if(index + dim > v->size){
        v->vec = realloc(v->vec, (index + dim + CHUNK) * sizeof(element));
  
    for (size_t i = v->dim; i < index + dim + CHUNK; i++) {
        v->vec[i].flag = 0;
    } 

    v->size = index + dim + CHUNK;
    }

    putRec(v->vec, elems, dim, index, &agregados, &(v->count));

    return agregados;

}

/* Retorna el índice en el cual está inertado sel elemento, o -1 si no lo
encuentra */

 /*   static int getIdxRec(element * vec, elemType elem, size_t dim, int (*compare) (elemType, elemType)){
        if(dim == 0){
            return -1;
        }
        if(compare(vec[dim-1].valor, elem) == 0){
            return dim - 1; 
        } 
        return getIdxRec(vec, elem, dim-1, compare); 
    }


int getIdx(vectorADT v, elemType elem){
    int idx = getIdxRec(v->dec, elem, dim, vec->size); 
    return idx; 
}*/  // preguntar  a franco profe.

int getIdx(vectorADT v, elemType elem){
    for(int i = 0; i < ((v->size)); i++){
        if((v->compare((v->vec)[i].valor, elem)) == 0){
            return i; 
        }
    }
    return -1; 
}

void deleteElement(vectorADT v, size_t index){
    if(((v->size)-1) < index){
        return; 
    }
    v->vec[index].flag = 0;
    (v->count)--;  
}

int elementCount(vectorADT v){
    return v->count; 
}

void freeVector(vectorADT v){
    if(v != NULL){
        free(v->vec);
        free(v); 
    }
}
