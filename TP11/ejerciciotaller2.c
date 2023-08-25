typedef struct node * Tlist; 

typedef struct node{
    int elem;
    struct node * tail;
}Tnode; 


typedef struct queueCDT{
    Tnode * first;
    Tnode * last;  
}


queueADT newQueue(void){
    queueADT new = calloc(1, sizeof(queueCDT));
    return new; 
}

void queue(queueADT q, elementType n){

}
