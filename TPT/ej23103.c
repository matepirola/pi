#include <stdio.h>

int dondeEsta(const int v[],size_t dim, int a, int pos[]);
void imprimir (int pos[], int cont);

int main(void)
{
    int v[]={3,5,5,5,5,6,7,7,8,9,12,15};
    int a=5;
    int dim = sizeof(v)/sizeof(v[0]);
    int pos[dim];
    int dimPos = dondeEsta(v, dim, a, pos);
    printf("El numero %d aparece en las posiciones: \n", a);
    imprimir(pos, dimPos);
    return 0;
}

int dondeEsta(const int v[],size_t dim, int a, int pos[]){
    int cont = 0;
    for(int i=0; i<dim && v[i]<=a ; i++){
        if(v[i] == a){
            pos[cont++]=i;//pos[0]=1 si estoy buscando un 5 -> pos[] ={1,2,3,4,basura...}
        }
    }
    return cont;
}

void imprimir (int pos[], int cont){
    for(int i= 0; i<cont; i++){
        printf("%d\n" , pos[i]);
    }
}