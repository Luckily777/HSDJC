#include <stdio.h>
#include <stdlib.h>

int main(){
	int a[4][4];
	int i, j;
	printf("Enter 16 Numbers:\n");
	for (i = 0; i < 4; i++){
		for (j = 0; j < 4; j++){
			scanf("%d", &a[i][j]);//��a������г�ʼ����
		}
	}

	printf("4x4 out is:\n");//��4x4������ʽ��ӡ������
	for (i = 0; i < 4; i++){
		for (j = 0; j < 4; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}