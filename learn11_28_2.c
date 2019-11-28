#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(){
	int a[5] = { 0 };
	int i, j;
	for (i = 0; i < 5; i++){
		scanf("%d", &a[i]);
	}
	int temp = 0;
	for (i = 0; i < 5; i++){
		for (j = 0; j < 5; j++){
			if (a[i]>a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("Max=%d\nMin=%d\n", a[0], a[4]);
	system("pause");
	return 0;
}
