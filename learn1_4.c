#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{

	int Max(int x, int y);// 声明max函数
	int a, b, c;
	scanf("%d %d", &a, &b);
	c = max(a, b);//调用max函数，将其返回值赋予c
	printf("Max=%d\n", c);//输出最大值c
	system("pause");
	return 0;
}
int Max(int x, int y)//定义max函数
{
	int z;
	if (x > y)z = x;
	else z = y;
	return(z);//返回最大值z
}

