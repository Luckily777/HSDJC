#include <stdio.h>
int main()
{
	int a;
	int b;
	printf("������a��b��ֵ:");
	scanf("%d%d", &a, &b);
	a = a + b;//a����a��b�ĺͣ�
	b = a - b;//b������a��ȥb��������ԭ�е�a��
	a = a - b;//a������a��ȥ��b��������ԭ�е�b��
	printf("a=%d\nb=%d\n", a, b);
	system("pause");
	return 0;
}