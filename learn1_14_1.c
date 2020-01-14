#include <stdio.h>
#include <stdlib.h>

int main()
{
	int w = 1, x = 2, y = 3, z = 4;
	int m;
	m= (w < x) ? w : x;
	printf("%d\n", m);
	m = (w < y) ? w : y;
	printf("%d\n", m);
	m = (w < z) ? w : z;
	printf("%d\n", m);
	system("pause");
	return 0;
}