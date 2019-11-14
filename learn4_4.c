#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a, b;
	printf("请输入两个值a和b:\n");
	scanf("%d %d", &a, &b);
		while (a != b)
		{
			if (a > b)
			a = a - b;//两者相减
			else
			b = b - a;//两者相减
		}
		printf("最大公约数：%d\n",a);
		system("pause");
			return 0;
}