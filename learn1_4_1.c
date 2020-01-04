#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
int main()
{
	int index, i, k, n, temp;
	int a[100];
	printf("请输入n:");
	scanf("%d", &n);
	printf("请输入%d个数：", n);
	for (i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n; i++){
		for (k = i + 1; k < n; k++){
			if (a[i] > a[k]){
				temp = a[i];
				a[i] = a[k];
				a[k] = temp;
			}
		}
}
	printf("排序完成后：");
		for (i = 0; i < n; i++)
			printf("%d ", a[i]);
		printf("\n");
		system("pause");
		return 0;
	}

