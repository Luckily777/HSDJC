#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)//��10ȡ�࣬��9�Ƚϣ������λ��
		    count+=1;
		if (i / 10 == 9)//��10ȡ������9�Ƚϣ�����ʮλ��
			count+=1;
	}
	printf("%d", count);
	system("pause");
	return 0;
}