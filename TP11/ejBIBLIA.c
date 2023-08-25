#define dim 76

typedef struct bibleCDT{
    versiculo book[dim]
}bibleCDT; 

typedef struct versiculo{
    num * versiculo; 
    size_t cant; 
}versiculo; 

typedef struct num{
    char * text; 
    size_t flag; 
}num;   



bibleADT newBible(){
    bibleADT new = calloc(1, sizeof(bibleCDT)); 
    return new; 
}

int addVerse(bibleADT bible, size_t bookNbr, size_t verseNbr, const char * verse){
    if(bookNbr < 1 || bookNbr > dim){
        return 0; //si bookNbr no cumple con el rango, devuelve 0
    }
    if(bible->book[bookNbr - 1].versiculo[verseNbr - 1].flag == 1){
        return 0; //si el flag del versiculo al que se accede es 1 (ya se uso), devuelve 0.
    }
    if(bible->book[bookNbr - 1].cant < verseNbr){//si la el versiculo es mayor a la cantidad de versiculos (todavia hay lugar) entra al if
        bible->book[bookNbr - 1].versiculo[verseNbr - 1] = realloc(bible->book[bookNbr - 1].versiculo[verseNbr - 1], sizeof(num) * verseNbr); 
        for(i = bible->book[bookNbr - 1].cant; i < verseNbr; i++){
            bible->book[bookNbr - 1].versiculo[i].flag = 0; 
        }
    }
    bible->book[bookNbr - 1].versiculo[verseNbr - 1].text = stringcopy(verse); 
    bible->book[bookNbr - 1].versiculo[verseNbr].flag = 1; 
    bible->book[bookNbr - 1].cant = verseNbr; 
    return 1; 
}


char * getVerse(bibleADT bible, size_t bookNbr, size_t verseNbr){
    if(bookNbr < 1 || bookNbr > dim){
        return NULL; 
    }
    if(bible->book[bookNbr - 1].versiculo[verseNbr - 1].flag == 1){
        return stringcopy(bible->book[bookNbr - 1].versiculo[verseNbr - 1].text); 
    }
    return NULL; 

}

void freeBible(bibleADT bible){
    if(bible != NULL){
        for(size_t i = 0; i < dim; i++){
            for(size_t j = 0; j < bible->book->cant; j++){
                free(bible->book[i].versiculo[j].text); 
            }
        }
        free(bible);
    }
    return; 
}

