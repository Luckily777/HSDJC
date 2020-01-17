#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a = 2, b = -1, c = 2;
	if (a < b)
	{
		if (b < 0) c = 0;
		else c++;
	}  
	printf("%d\n", c);
	system("pause");
	return 0;
}