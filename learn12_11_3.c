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
		printf("%d ", *p);//数组转为隐式指针，之后+1，则代表取值
	}
	printf("\n");
	system("pause");
	return 0;
}