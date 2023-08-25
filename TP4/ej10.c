#include <stdio.h>
int dcm (int a, int b);
int main (void){
    int a = 125, b = 135;
    int h =  dcm(a,b);
    printf("%d\n" , h);
    return 0; 
}

int 
dcm (int a, int b)
{
	int auxi = 1;


	while (auxi>0)
	{	
        auxi = b;
        a = b;
        auxi = a % b;
    }


	return a;
}

// 135 = 125 (1) + 10 
// 125 = 10 (12) + 5
// 10 = 5 (2) + 0

/*
    int aux1, aux2, c, b;
    while(a % b != 0){
        aux1 = a / b; 
        aux2 = a % d
        c = (b * aux1) + aux2
    }
*/