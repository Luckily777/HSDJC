#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a, b;
	printf("����������ֵa��b:\n");
	scanf("%d %d", &a, &b);
		while (a != b)
		{
			if (a > b)
			a = a - b;//�������
			else
			b = b - a;//�������
		}
		printf("���Լ����%d\n",a);
		system("pause");
			return 0;
}