#include <stdio.h>
#include <stdlib.h>


int main()
{
	int a[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 }, *p = a + 3;
	printf("%d", *++p);
	system("pause");
	return 0;
}