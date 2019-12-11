#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void inv(int *x, int n){
	int *p, m, temp, *i, *j;
	m = (n - 1) / 2;
	i = x; j = x + n - 1; p = x + m;
	for (; i <= p; i++,j--){
		temp = *i;
		*i = *j;
		*j = temp;
	}
	return;
}

int main(){
	int i, arr[10], *p = arr;
	printf("The original array:");
	for (i = 0; i < 10; i++, p++){
		scanf("%d", p);
	}
	printf("\n");
	p = arr;// 指针变量重新指向arr的初始位置
	inv(p, 10);
	printf("The array has been inverted:");
	for (p = arr; p < (arr+10); p++){
		printf("%d ", *p);
	}
	printf("\n");
	system("pause");
	return 0;
}