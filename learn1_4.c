#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{

	int Max(int x, int y);// ����max����
	int a, b, c;
	scanf("%d %d", &a, &b);
	c = max(a, b);//����max���������䷵��ֵ����c
	printf("Max=%d\n", c);//������ֵc
	system("pause");
	return 0;
}
int Max(int x, int y)//����max����
{
	int z;
	if (x > y)z = x;
	else z = y;
	return(z);//�������ֵz
}

