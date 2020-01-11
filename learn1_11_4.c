#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x = 1;
	char c = (char)x;
	if (c == 1)
	{
		printf("小端机\n");
	}
	else if (c == 0)
	{
		printf("大端机\n");
	}
	system("pause");
	return 0;
}