#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i, j;
	int t = 0;
	printf("�˷��ھ���");
	{
		for (i = 1; i <= 9; i++)//��һ��������
		{
			for (j = 1; j <= i; j++)//�ڶ���������
			{
				printf("%d*%d=%-2d", i, j, i*j);
			}
			printf("\n");
		}
	}
		system("pause");
		return 0;
	}