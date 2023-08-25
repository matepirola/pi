/*write a program to copy its input to its output, replacing each string of one or more blanks 
by a single blank*/
#include <stdio.h>
int main(void)
{
    int txt, contEsp = 0; 
    while((txt = getchar()) != EOF)
    {
       if (txt == ' ')
       {
        contEsp++;
       }
       else
       {
        contEsp = 0;
       }
       if ( contEsp > 1)
       {
        printf("%c" , 0);
       }else 
       {
        printf("%c" , txt);
       }
    
    }
    return 0; 
} 




/*while(txt = ' ')
        {
            contEsp++;
            if (contEsp > 1)
            {
                contEsp = ' ';
                printf("%c" , contEsp);
            }
        }
        contEsp = 0;*/