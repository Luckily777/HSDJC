#include <stdio.h>
#include <stdlib.h>

#define sum(a,b,c) a+b+c

int main()
{
	int i = 3, j = 2;
	printf("%d\n", i*sum(i, (i + j), j));//等价于i*a+b+c 运算顺序不同
	system("pause");
	return 0;
}