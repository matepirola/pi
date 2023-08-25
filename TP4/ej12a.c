#include <stdio.h>
neg(int n);
int
main(void)
{
	int c = 2;
	c = neg(c);
	printf("%c\n",c);
	return 0;
}
int
neg(int n)
{
	return -n;
}

//no porque el printf esta usando el valor en ascii en vez del entero! 
//además si se quisiera obtener el ascii del -2 no existe por lo tanto no tiene sentido
