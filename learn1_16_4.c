#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j, max;
	int a[3][4] = { { 1, 2, 3, 4 }, { 9, 8, 7, 6 }, { -10, 10, -5, 2 } };
	max = a[0][0];
	for (i = 0; i <= 2; i++)
	for (j = 0; j <= 3; j++)
	if (a[i][i]>max)
		max = a[i][j];
	printf("max=%d\n", max);
	system("pause");
	return 0;
}