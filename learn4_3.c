#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,j, max;
	int a[10];//�������飻
	max = a[0];//�����ֵ��ʼ��
	printf("������ʮ�����֣�\n");
	for (j = 0; j<10;j++)
	scanf("%d", &a[j]);
	printf("\n");
	for (i = 0; i <= 9;i++)
	if (a[i] > max){
		max = a[i];//����������ݸ�max��
	}
	printf("max=%d\n", max);
	system("pause");
	return 0;
}
