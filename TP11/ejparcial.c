#include <stdio.h>
#include <stdlib.h>




/*cada nodo tiene una letra o bien un espacio.
las listas son vacias o comeinzan con una palabra (no comeinzan con un espacio).
no hay espacios de mas.
hay un espacio luego de cada pablar inclusive de la ultima palabra.
puede ser que haya una lista sin palabras en este caso tampco tiene espacios.*/

typedef struct node * TList; 

typedef struct node{
    int elem;
    struct node * tail;
}Tnode; 


TList createList(char v[], int dim){
    if (dim == 0){
        return NULL;
    }
    TList nodo = malloc(sizeof(*nodo));
    nodo->elem = v[0];
    nodo->tail = createList(v+1, dim-1);
    return nodo;
}
//L1 es la que copio. L2 es la que dejo esperando.
//Cuando en L1 me encuentro con un espacio, llamo para que copie a L2
TList merge(TList l1, TList l2){
	//Caso base, ambas listas estan vacias. No hay mas nada por copiar
	if(l1 == NULL && l2 == NULL)
		return NULL;
	//Caso base 2, l2 es NULL. No hago mas switch, copio todo L1.
	if(l2 == NULL){
		TList aux = malloc(sizeof(*aux));
		aux->elem = l1->elem;
		aux->tail = merge(l1->tail, l2);
		return aux;
	}
	if(l1 == NULL){
		TList aux = malloc(sizeof(*aux));
		aux->elem = l2->elem;
		aux->tail = merge(l1, l2->tail);
		return aux;
	}
	if(l1->elem == ' '){
		TList aux = malloc(sizeof(*aux));
		aux->elem = l1->elem;
		aux->tail = merge(l2, l1->tail);
		return aux;
	}
	//Caso 2, l1 tiene letras por copiar
	TList aux = malloc(sizeof(*aux));
	aux->elem = l1->elem;
	aux->tail = merge(l1->tail, l2);
	return aux;
}


void printList(TList l){
    if (l == NULL){
        printf("\n");
        return;
    }
    printf("%c | ", l->elem);
    printList(l->tail);
}

int main(void){
	char vec1[] = {'A', 'A', ' ', 'A', 'A', ' ', 'A', ' '};
	char vec2[] = {'B','B','B',' ','B', ' ', 'B','B', 'B', ' ','B', ' '};
	TList l1 = createList(vec1, 7);
	TList l2 = createList(vec2, 11);
	TList lMerge = merge(l1, l2);
	printList(l1);
	printList(l2);
	printList(lMerge);
	return 0;
}
