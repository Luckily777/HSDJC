#include <stdio.h>
#include <stdlib.h>


int main()
{
	int i, j, m = 1;
	for (i = 1; i < 3; i++)
	{
		for (j = 3; j>0; j--)
		{
			if ((i*j) > 3)break;
			m *= i*j;
		}
	}
	printf("m=%d\n", m);
	system("pause");
	return 0;
}