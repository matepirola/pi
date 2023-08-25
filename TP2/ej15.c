/*
Leer un carácter e imprimirlo en mayúscula. 
Considerar que el conjunto de caracteres es el del lenguaje inglés, o sea ignorar la ñ  y vocales acentuadas. 
(Usar operador condicional).
*/

#include <stdio.h>

int main(void)
{
    char a, b;
    a = getchar();
    if(a >= 'a' && a < 'z')
    {
        b = a + ('A' - 'a');
        printf("%c\n" , b);
    }
    else
    {
        b = a - ('A' - 'a');
        printf("%c\n" , b);
    }
    return 0;
}
