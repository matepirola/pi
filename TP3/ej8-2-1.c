#include <stdio.h>
#include "../biblio/getnum.h"
int main(void){
    int a = __INT_MAX__;
    char b = __SCHAR_MAX__ ;
    short c = __SHRT_MAX__;
    printf("rango de int %d\n:" , a);
    printf("rango de char %d\n:" , b);
    printf("rango de short %d\n:" , c);
}
