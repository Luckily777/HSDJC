#include <stdio.h>
#include <stdlib.h>
int main()
{
	int arr[16] = { 1, 5, 6, 9, 8, 7, 6, 12, 15, 16, 18, 13, 21, 25, 26, 28 };
	int temp;
	int i, m, n;
	for (n = 0; n < 15; n++)//�ӵڼ�����ʼ���бȽϣ�
	for (m = 0; m < 15 - n; m++)//�ȽϵĴ�����
	{
		if (arr[m] < arr[m + 1])//mλ��m+1λ���бȽϣ���С�ĺ��ã�
		{
			temp = arr[m];
			arr[m] = arr[m + 1];
			arr[m + 1] = temp;
		}
	}
	for (i = 0; i < 16; i++)//�������ȫ�µ����飻
		printf("The order is:%d\n", arr[i]);
	system("pause");
}
