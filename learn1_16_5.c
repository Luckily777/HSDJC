#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x = 9981;
	int countx = 0;
	while (x)
	{
		countx++;
		x = x&(x - 1);
	}
	printf("%d", countx);
	system("pause");
	return 0;
}