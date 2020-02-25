#include <stdio.h>
#include <stdlib.h>
//+128和-128的无符号打印是相同的

int main()
{
	// 两个不同的变量，所打印出来的是完全相同的，核心内容也是完全相同的
	char a = -128;
	char b = 128;
	printf("a=%u\nb=%u\n", a,b);
	system("pause");
	return 0;
}