#include <stdio.h>
#include <stdlib.h>

int f1(int  x, int  y){
	return
		x>y ? x : y;
}
int f2(int  x, int  y){
	return
		x>y ? y : x;
}


int main()
{
	int  a = 4, b = 3, c = 5, d = 2, e, f, g;

	e = f2(f1(a, b), f1(c, d));

	f = f1(f2(a, b), f2(c, d));

	g = a + b + c + d - e - f;

	printf("%d,%d,%d\n", e, f, g);
	system("pause");
	return 0;
}