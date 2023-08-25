
#include <stdio.h>
int main(void)
{
    int a;
    while((a = getchar()) != EOF)
    {
      if (a != ' ')
      {
        printf("%c" , a);
      }else
      {
        printf("\n");
      }
    }
    return 0;
}