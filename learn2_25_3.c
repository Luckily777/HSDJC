#include <stdio.h>
#include <stdlib.h>
//��С�˵�ָ����ʽʵ��
int IsLittleEnd()
{
	int num = 0x11223344;
	int* p = &num;
	char *f = (char *)p;
	if (*f == 0x44)
	{
		return 1;
	}
	else
		return 0;
}

int main()
{
	printf("%d\n",IsLittleEnd());
	system("pause");
	return 0;
}