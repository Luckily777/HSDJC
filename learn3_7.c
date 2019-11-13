#include <stdio.h>
int main()
{
	int a;
	int b;
	printf("请输入a和b的值:");
	scanf("%d%d", &a, &b);
	a = a + b;//a等于a和b的和；
	b = a - b;//b等于新a减去b，则留下原有的a；
	a = a - b;//a等于新a减去新b，则留下原有的b；
	printf("a=%d\nb=%d\n", a, b);
	system("pause");
	return 0;
}