#include <stdio.h>
#include "../biblio/getnum.h"
int main(void){
    double f;
    double c = getdouble("ingrese grados celcius:");
    f = 32 + (c * 9/5);
    printf("grados en fahrenheit= %f\n" , f);
    return 0; 
}