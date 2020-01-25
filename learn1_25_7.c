#include <stdio.h>
#include <stdlib.h>

int fun(int a)
{
	int b = 0;
	static int c = 3;
	a = (c++, b++);
	return (a);
}

int main()
{
	int a = 2, i, k;
	for (i = 0; i<2; i++)
		k = fun(a ++);
	printf("%d\n", k);
	system("pause");
	return 0;
}