#include <stdio.h>
#include <stdlib.h>


int main()
{
	if ('\0' == 0)putchar('X');
	if ('\0' == 0)putchar('Y');
	if ('a' > 'b')putchar('Z');
	printf("\n");
	system("pause");
	return 0;
}