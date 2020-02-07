#include <stdio.h>
#include <stdlib.h>


int main()
{
	int a = 1, b = 10;
	do
	{
		b -= a; a++;
	} while (b--<0);
	printf("a=%d,b=%d\n", a, b);
	system("pause");
	return 0;
}