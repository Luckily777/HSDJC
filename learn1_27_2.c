#include <stdio.h>
#include <stdlib.h>


int main()
{
	unsigned char *p1;
	unsigned long *p2;
	p1 = (unsigned char *)0x801000;
	p2 = (unsigned long *)0x810000;

	printf("%d\n", p1);
	printf("%d\n", p1+5);
	printf("%d\n", p2);
	printf("%d\n", p2+5);
	system("pause");
	return 0;
}