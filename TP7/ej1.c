#include <stdlib.h>
#include <stdio.h>

int
main(void) {

        char * p = malloc(10 * sizeof(char));

        for(int i=0; i < 10; i++)
                p[i] = i * 10;


        for(int i=0; i < 10; i++)
                printf("%d\n", p[i]);

        free(p);

        return 0;
}
