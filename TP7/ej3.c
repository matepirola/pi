#include <stdio.h>
void misterio1 ( char *s1, const char *s2);

int
main(void)
{
	char string1[80], string2[80];
	printf ("Ingrese dos cadenas: ");
	scanf("%s%s", string1, string2);
	misterio1(string1,string2);
	return 0;
}

void
misterio1 ( char *s1, const char *s2)
{
	while (*s1 != '\0')
		++s1; //  == s1[i++]con i que va aumentando.
	for ( ; *s1 = *s2; s1++, s2++)
		;
}
