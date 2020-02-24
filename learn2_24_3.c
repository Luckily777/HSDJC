#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>

//memmove   �ڴ��ص�������

void *my_memmove(void*dst, const void *src, size_t num)
{
	assert(src&&dst);
	char * str_dst = (char*)dst;
	char * str_src = (char*)src;
	if (str_src < str_dst&&str_dst<str_src+num)//���ص������߲��ص����Ӻ���ǰ��
	{
		for (int i = num - 1; i >= 0; --i)
		{
			str_dst[i] = str_src[i];
		}
	}
	else// ǰ�ص� ���ص� ��ǰ����
	{
		for (size_t i = 0; i < num; ++i)
		{
			str_dst[i] = str_src[i];
		}
	}
	return dst;
}



int main()
{
	int a[10] = { 1, 2, 3, 4, 5};
	//my_memcpy(a + 3, a, 5 * sizeof(int));
	my_memmove(a + 3, a, 5 * sizeof(int));
	for (size_t i = 0; i < 10; ++i)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	int b[10] = { 1, 2, 3, 4, 5 };
	int c[10];
	my_memmove(c, b, 10 * sizeof(int));
	for (size_t i = 0; i < 10; ++i)
	{
		printf("%d ", c[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}