#include <stdio.h>
#include <stdlib.h>


int main()
{
	int a = -2, b = 0;
	while (a++) ++b;
	printf("%d,%d\n", a, b);
	system("pause");
	return 0;
}