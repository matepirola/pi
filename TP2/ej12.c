#include <stdio.h>

int main(void)
{
    char a; 
    printf("ingrese caracter: ");
    a = getchar();
    if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z')) //si el carater esta en ese rango de valores, entoces es una letra.
    {
        printf("es una letra.");
    }
    else
    {
    printf("no es una letra."); // en caso de no estar en ese rango de valores no es una letra.
    return 0; 
    }
}
 