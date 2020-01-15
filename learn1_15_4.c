#include <stdio.h>
#include <stdlib.h>
int f1(int x)
{
	return x + 5;
}

int f2(int x)
{
	return 2 * x - 1;
}

int main()
{
	int(*p1)(int), (*p2)(int), (*t)(int), y1, y2;
	p1 = f1;
	p2 = f2;
	y1 = p2(p1(1));
	t = p1;
	p1 = p2;
	p2 = t;
	y2 = p2(p1(2));
	printf("%d,%d\n", y1, y2);
	system("pause");
	return 0;
}