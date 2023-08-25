
#define CHUNK 20


typedef struct element{
    char * frase; 
    size_t used; 
}element; 

typedef struct phrasesCDT{
    element * vec; 
    size_t size; 
    size_t keyfrom; 
    size_t keyto;
}phrasesCDT; 


static char * stringcpy(const char * s){
    char * ans = NULL;
    int i;
    for(i=0; s[i]; i++){
        if (!(i%CHUNK)){
            ans = realloc(ans, CHUNK+i);
        }
            
        ans[i] = s[i];
    }

    ans = realloc(ans, i+1);
    ans[i] = '\0';

    return ans;

}
phrasesADT newPhrasesADT(size_t keyFrom, size_t keyTo){
    phrasesADT new = calloc(1, sizeof(phrasesCDT));
    if(keyFrom < 0 || keyTo < 0 || keyFrom >= keyTo){
        return NULL
    }
    new->keyfrom = keyFrom;
    new->keyto = keyTo; 
}

/*
* Agrega una frase. Si la clave key es inválida retorna 0, sinó retorna 1 (uno)
* Si ya hay una frase asociada a la clave, actualiza la frase almacenada,
* reemplazándola por el parámetro phrase.
* Se almacena una copia de la frase.
*/
int put(phrasesADT ph, size_t key, const char * phrase){
    if(key >= 0 0 && (ph->keyto < key || ph->keyfrom > key)){
        return 0; 
    }
    if((ph->vec[key].used) == 0){
        ph->vec[key].frase = stringcpy(phrase); 
        ph->vec[key].used = 1; 
        (ph->size) + 1;
    }else{
        ph->vec[key].frase = stringcpy(phrase); 
    }
    return 1;    
}

/*
* Retorna una copia de la frase asociada a la clave key. Si no hay frase asociada
* a la clave key retorna NULL, lo mismo si la clave es inválida.
*/
char * get(const phrasesADT ph, size_t key){
    if((key >= 0)  && (ph->keyto < key || ph->keyfrom > key) && (ph->vec[key].used == 1)){
        return NULL; 
    }
    return stringcopy(ph->vec[key].frase); 
}

size_t size(const phrasesADT ph){
    return ph->size; 
}

/*
* Retorna un string con todas las frases concatenadas 
* Si no hay frases retorna un string vacío
*/
char * concatAll(const phrasesADT ph){
    int k = 0; 
    for(size_t i = ph->keyfrom; i < keyto; i++){
        if(ph->vec[i].used == 0){
            
        }
    }
}





