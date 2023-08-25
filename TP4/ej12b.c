#include <stdio.h>
double neg(double n);
int
main(void)
{
	double i = 5.42;
	
	i = neg(i);
	printf("%f\n",i);
	return 0;
}
double neg(double n)
{
	return -n;
}
// Funciona perfectamente.