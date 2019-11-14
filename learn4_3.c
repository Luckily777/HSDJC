#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,j, max;
	int a[10];//输入数组；
	max = a[0];//对最大值初始化
	printf("请输入十个数字：\n");
	for (j = 0; j<10;j++)
	scanf("%d", &a[j]);
	printf("\n");
	for (i = 0; i <= 9;i++)
	if (a[i] > max){
		max = a[i];//将这个数传递给max；
	}
	printf("max=%d\n", max);
	system("pause");
	return 0;
}
