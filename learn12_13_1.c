#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void check(int *p){//定义check函数，形参是int* 指针
	int i;
	printf("They are fail:");
	for (i = 0; i < 5; i++)
	{
		if (p[i] < 60){
			printf("%d", p[i]);//输出不合格的成绩
		}
	}
	printf("\n");
}

int main(){
	int* p1, i;//定义p1为int型指针
	p1 = (int *)malloc(5 * sizeof(int));//开辟动态内存，将地址转换成int* 型，然后存放在p1中
	for (i = 0; i < 5; i++){
		scanf("%d", p1 + i);
	}
	check(p1);
	system("pause");
	return 0;
}