/*Escribir una versión recursiva de la función strrchr.*/



#include <stdio.h>
#include <string.h>
#include <assert.h>

char * strrchrRec(const char *s, char c);

int
main(void) {
	char * s = "vamos a buscar";

	for ( int i=0; s[i]; i++) {
		assert(strrchr(s, s[i]) == strrchrRec(s, s[i]));
	} 

	puts("OK!");
}

char * strrchrRec(const char *s, char c){
    if(*s == 0){
        return NULL; 
    }
    char * n = strrchrRec(s+1, c); 
    if(n != NULL){
        return n;  
    }if(*s == c){
        return s;
    }
    return NULL; 

}
