#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(){
	int a[10];
	int i, *p;
	printf("please enter 10 integer number:");
	for (i = 0; i < 10; i++){
		scanf("%d", &a[i]);
	}
	for (p = a; p < (a + 10); p++){
		printf("%d ", *p);//����תΪ��ʽָ�룬֮��+1�������ȡֵ
	}
	printf("\n");
	system("pause");
	return 0;
}