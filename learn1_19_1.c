#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int func(int a)
{
	int b;
	switch (a)
	{
	case 1:b = 30;
	case 2:b = 20;
	case 3:b = 16;
	default:b = 0;
	}
	return b;
}

int main()
{
	int a = 1;
	printf("%d", func(a));
	system("pause");
	return 0;
}