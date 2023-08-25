#include <stdio.h> 
#include <math.h>
#define Pi 3.1415
#define Volumen(r) ((pow(r, 3)) * (4.0/3.0) * (Pi))
int main(void)
{
    float v, r;
    for (r = 1; r<= 10; r++)
    {
        v= Volumen(r);
        printf("%f\t\n" , v);
    }
    return 0;
}