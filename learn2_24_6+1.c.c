#include <stdio.h>
#include <stdlib.h>
//cLIANXI
int main()
{
	int a[12] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 }, *p[4], i;
	for (i = 0; i < 4; i++)
	{
		p[i] = &a[i * 3];
	}
	printf("%d\n", p[3][2]);
	system("pause");
	return 0;
}