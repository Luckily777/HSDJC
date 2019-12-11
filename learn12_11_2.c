#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(){
	int a[10];
	int i;
	printf("please enter 10 integer number:");
	for (i = 0; i < 10; i++){
		scanf("%d", &a[i]);
	}
	for (i = 0; i < 10; i++){
		printf("%d", *(a + i));//数组转为隐式指针，之后+i，则代表取第i个值
	}
	printf("\n");
	system("pause");
	return 0;
}
