#include <stdio.h>
#include <stdlib.h>

void main()
{
	char st[20] = "hello\0\t\\";
	printf("%d,%d\n", strlen(st), sizeof (st));
	system("pause");
}
