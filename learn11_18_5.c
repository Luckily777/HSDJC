#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, j;
	int a[7][7];
	for (i = 0; i <= 6; i++){
		a[i][i] = 1;//��Ϊ1����λ����ȫ�������
		a[i][0] = 1;
	}
	for (i = 2; i <= 6; i++){
		for (j = 1; j <= i - 1; j++){
			a[i][j] = a[i - 1][j] + a[i - 1][j - 1];//����Ϊ1����λ���
		}
	}
	for (i = 0; i <= 6; i++){
		for (j = 0; j <= i; j++){
			printf("%4d",a[i][j]);
		}	
		printf("\n");
	}
	system("pause");
	return 0;
}