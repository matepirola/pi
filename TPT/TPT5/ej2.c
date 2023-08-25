#include <stdio.h>
#include <math.h>
int main(void){
    int a= 1, b = 1, c = 1; 
    return 0;
}

int solucionesCuadraticas(int a, int b, int c, float *r1, float *r2){
    int disc; 
    int rta;
    disc = sqrt(pow(b,2) - (4*a*c));
    if (disc < 0){
        rta = 0;
    } else if(disc == 0){
        rta = 1;
        (*r1) = (-b)/(2*a);
    }else if (disc > 0){
        rta = 2; 
        (*r1) = (-b + disc)/(2*a);
        (*r2) = (-b - disc)/(2*a);
    }
    
    return rta; 
}