#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void sort(int x[], int n){
	int i, j, k, t;
	for (i=0; i <=n-1; i++){
		k = i;
		for (j = 0; j <= n; j++){
			if (x[j] > x[k]){
				k = j;
			}
			if (k != i){
				t = x[i];
				x[i] = x[j];
				x[j] = t;
			}
		}
	}
	return;
}

int main(){
	int i, a[10], *p;
	p = a;
	printf("The original array:");
	for (i = 0; i < 10; i++, p++){
		scanf("%d", p);
	}
	printf("\n");
	p = a;// 指针变量重新指向arr的初始位置
	sort(p, 10);
	printf("The array has been inverted:");
	for (p = a; p < (a + 10); p++){
		printf("%d ", *p);
	}
	printf("\n");
	system("pause");
	return 0;
}