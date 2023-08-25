#include <stdio.h>
int main(void)
{
    int txt; 
    while((txt = getchar()) != EOF)
    {
        if (txt == '\t')
        {
            printf("\t");
        }
        if (txt == '\\')
        {
            printf("\\\\");
        }
        if (txt == '\b')
        {
            printf("\\b");
        }
        else
        {
            printf("%c" , txt);
        }
    }

    return 0;
}