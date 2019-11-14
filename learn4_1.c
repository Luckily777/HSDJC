#include <stdio.h>
#include <stdlib.h>
int main()
{
	int arr[16] = { 1, 5, 6, 9, 8, 7, 6, 12, 15, 16, 18, 13, 21, 25, 26, 28 };
	int temp;
	int i, m, n;
	for (n = 0; n < 15; n++)//从第几个开始进行比较；
	for (m = 0; m < 15 - n; m++)//比较的次数；
	{
		if (arr[m] < arr[m + 1])//m位和m+1位进行比较，将小的后置；
		{
			temp = arr[m];
			arr[m] = arr[m + 1];
			arr[m + 1] = temp;
		}
	}
	for (i = 0; i < 16; i++)//按序输出全新的数组；
		printf("The order is:%d\n", arr[i]);
	system("pause");
}
