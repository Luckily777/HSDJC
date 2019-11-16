#include <stdio.h>
#include <stdlib.h>

int main(){
	int a[10];
	int i, j, temp;
	printf("请输入十个数字:\n");
	for (i = 0; i <= 9; i++){
		scanf("%d", &a[i]);
		printf("\n");
	}
	for (j = 0; j < 9;j++)
	 for (i = 0; i < 9 - j;i++)
	  if (a[i]>a[i + 1]){//和后一项比较大小；
		temp = a[i];//交换位置
		a[i] = a[i + 1];
		a[i + 1] = temp;
	}
	printf("由大到小排列为：\n");
	for (i = 0; i <= 9; i++)
		printf("%d", a[i]);
	printf("\n");
	system("pause");
	return 0;
}