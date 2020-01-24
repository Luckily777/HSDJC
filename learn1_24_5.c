#include <stdio.h>
#include <stdlib.h>


union myun
{
	struct { int x, y, z; } u;
	int k;
} a;

int main()
{
	a.u.x = 4; a.u.y = 5; a.u.z = 6;
		a.k = 0;
		printf("%d\n", a.u.x);
	system("pause");
	return 0;
}
