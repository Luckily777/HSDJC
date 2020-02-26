#include <stdio.h>
#include <stdlib.h>
//Á·Ï°Ìâ2.26.1

int main()
{
	int a = 9;
	a += a -= a + a;
	printf("%d\n", a);
	system("pause");
	return 0;
}