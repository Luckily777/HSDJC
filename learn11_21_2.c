#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define Epsilon 1.0E-6

int main()
{
	float a, x0, x1;
	printf("请输入要求的数：\n");
	scanf("%f", &a);
	x0 = a / 2;
	x1 = (x0 + a / x0) / 2;
	while (fabs(x1 - x0) >= Epsilon){
		x0 = x1;
		x1 = (x0 + a / x0) / 2;
	}
	printf("平方根为：%f\n",x1);
	system("pause");
	return 0;
}