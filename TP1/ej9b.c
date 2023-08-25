int
main(void)
{
	int a=0;

	a++;
	return 0;
}
/*/usr/bin/ld: /tmp/cc00JP1b.o: in function `main':
ej9b.c:(.text+0x0): multiple definition of `main'; /tmp/ccGkIUUq.o:ej9a.c:(.text+0x0): first defined here
collect2: error: ld returned 1 exit status 
sera por que hay dos main?*/
