#include <stdio.h>
#include <stdlib.h>

int main(){
	int a[10];
	int i, j, temp;
	printf("������ʮ������:\n");
	for (i = 0; i <= 9; i++){
		scanf("%d", &a[i]);
		printf("\n");
	}
	for (j = 0; j < 9;j++)
	 for (i = 0; i < 9 - j;i++)
	  if (a[i]>a[i + 1]){//�ͺ�һ��Ƚϴ�С��
		temp = a[i];//����λ��
		a[i] = a[i + 1];
		a[i + 1] = temp;
	}
	printf("�ɴ�С����Ϊ��\n");
	for (i = 0; i <= 9; i++)
		printf("%d", a[i]);
	printf("\n");
	system("pause");
	return 0;
}