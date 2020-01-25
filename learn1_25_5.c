#include <stdio.h>
#include <stdlib.h>

#define N 4
void fun(int a[][N], int *p)
{
	int i;
	for (i = 0; i<N; i++) {
		if (i<3) p[i] += a[i][i] - a[i][N - i - 2];
		else p[i] += a[i][i] - a[i][N - i];
	}
}

void main()
{
	int x[N][N] = { { 3, 6, 2, 0 }, { 2, 8, 7, 9 }, { 5, 1, 7, 3 }, { 9, 5, 3, 7 } }, y[N] = { 3, 5, 8, 6 }, i;
	fun(x, y);
	for (i = 0; i<N; i++)
		printf("%d ", y[i]);
	printf("\n");
	system("pause");
	return 0;
}
