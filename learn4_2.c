#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i, j;
	int t = 0;
	printf("乘法口诀表");
	{
		for (i = 1; i <= 9; i++)//第一个乘数；
		{
			for (j = 1; j <= i; j++)//第二个乘数；
			{
				printf("%d*%d=%-2d", i, j, i*j);
			}
			printf("\n");
		}
	}
		system("pause");
		return 0;
	}