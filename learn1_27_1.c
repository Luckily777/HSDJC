#include <stdio.h>
#include <stdlib.h>

#define S(a,b) t=a;a=b;b=t;
//����δ����t,������ֶ����Ǵ����
int main()
{
	int a = 2, b = 3;
	S(a, b);
	printf("%d\n%d\n", a, b);
	system("pause");
	return 0;
}