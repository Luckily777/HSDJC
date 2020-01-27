#include <stdio.h>
#include <stdlib.h>

#define S(a,b) t=a;a=b;b=t;
//由于未定义t,因此这种定义是错误的
int main()
{
	int a = 2, b = 3;
	S(a, b);
	printf("%d\n%d\n", a, b);
	system("pause");
	return 0;
}