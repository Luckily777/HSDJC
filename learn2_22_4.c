#include <stdio.h>
#include <stdlib.h>

// ת�Ʊ���������
int add(int a, int b)
{
	return a + b;
}
int sub(int a, int b)
{
	return a - b;
}
int mul(int a, int b)
{
	return a*b;
}
int div(int a, int b)
{
		return a / b;
}
int main()
{
	int x, y;
	int input = 1;
	int ret = 0;
	int(*p[5])(int x, int y) = { 0, add, sub, mul, div }; //ת�Ʊ�
	while (input)
	{
		printf("*************************\n");
		printf(" 1:add 2:sub \n");
		printf(" 3:mul 4:div \n");
		printf("*************************\n");
		printf("��ѡ��");
		scanf("%d", &input);
		if ((input <= 4 && input >= 1))
		{
			printf("�����������");
			scanf("%d %d", &x, &y);
			ret = (*p[input])(x, y);
		}
		else
			printf("��������\n");
		printf("ret = %d\n", ret);
	}
	return 0;
}
