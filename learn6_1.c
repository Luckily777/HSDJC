#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n = 123456;
	int i;
	for (i = n; i; i/=10)//ÊıÎ»±éÀú£»
	{
		printf("%d ", i % 10);
	}
	system("pause");
	return 0;
}