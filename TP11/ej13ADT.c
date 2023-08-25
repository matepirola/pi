#include "rankingADT.h"
#include <stdlib.h>
#define CHUNK 10


#include SWAP(a,b) {\
     elemType z = (a);\
    (a) = (b);\
    (b) = (z);\
}

typedef struct rankingCDT{
    elemType * vec; 
    size_t dim; 
    (int) (*compare) (elemType, elemType); 
}

rankingADT newRanking(elemType elems[], size_t dim, int (*compare)(elemType source, elemType target)){
    rankingADT new = calloc(1, sizeof(rankingCDT)); 
    new->compare = compare; 
    if(dim > 0){
        new->vec = malloc((CHUNK+dim) * sizeof(elemType)); 
        for(size_t i = 0; i < dim; i++){
            new->vec[i] = elems[i]; 
        }
        new->dim = dim; 
    }
    return new; 
}


/* 1 si el elemento consultado está en el ranking, cero si no 
** Este acceso también hace que el elemento suba un puesto en el ranking
*/
int contains(rankingADT ranking, elemType elem){
    for(size_t i = 0; i < (ranking->dim); i++){
        if(((compare(ranking->vec, elem)) == 0)){
            if(i != 0){
                SWAP(ranking->vec[i-1], ranking->vec[i]);
            }
        }
            return 1; 
    }
    return 0; 
}





/* Agrega un elemento en la posición más baja del ranking, si no estaba.
** Si el elemento estaba, es equivalente a accederlo, por lo que sube un 
** puesto en el ranking
*/

void addRanking(rankingADT ranking, elemType elem){
    if(contains(ranking, elem) == 0){
        if(((ranking->dim) % CHUNK) == 0){
            ranking->vec = realloc(ranking->vec, (ranking->dim + CHUNK) * sizeof(elemType));
        }
        (ranking->dim)++; 
        ranking->vec[(raking->dim)] = elem;
    }
    return; 
}

size_t size(const rankingADT ranking){
    return ranking->dim; 
}

/* Si n es una posición válida del ranking, guarda en elem el elemento que está 
** en el puesto n y retorna 1.
** Si no hay elemento en la posición n, retorna cero y no modifica *elem
** Este acceso también hace que el elemento suba un puesto en el ranking
*/

int getByRanking(rankingADT ranking, size_t n, elemType * elem){
    if(n > 0 && (n < (ranking->dim))){
        (*elem) = ranking->vec[n-1]; 
        return 1; 
    }if(contains(ranking,elem) == 0){
    return 0; 
    }
}

/* top: entrada/salida
** Recibe cuántos elementos al tope del ranking se desean 
** Almacena cuántos pudo guardar (ver ejemplos)
** Si el ranking está vacío *top queda en cero y retorna NULL
//te devuele el top que vos le mandes.
*/
elemType * getTopRanking(const rankingADT ranking, size_t * top){
    if(ranking->vec == NULL){
        (*top) = 0; 
        return NULL; 
    }
    if((*top) > ranking->dim){
        (*top) = ranking->dim;
        int a = (*top) - 1; 
        elemType * aux = malloc((*top) * sizeof(elemType)); 
        for(int i = 0; i < a; i++){
            aux[i] = ranking->vec[i]; 
        }
        return aux; 
    }
    if((*top) <= ranking->dim){
        elemType * aux = malloc((*top) * sizeof(elemType)); 
        for(int i = 0; i < (*top) ; i++){
            aux[i] = ranking->vec[i]; 
        }
        return aux; 
    }
}  

/* Baja una posición en el ranking para el elemento que está en la posición n */
void downByRanking(rankingADT ranking, size_t n){
    if(n>=0){
        if(n > (ranking->dim - 1)){
            return; 
        }
        SWAP(ranking->vec[n], rankin->vec[n+1]); 
    }
}

void freeRanking(rankingADT r){
    if(r != NULL){
        free(r->vec); 
        free(r);  
    }
    return; 
}


