#include <stdio.h>
#include <stdlib.h>

void PrintArray(int *str, int n){
	int i;
	for (i = 1; i < n; i++){
		printf("%d ", str[i]);
	}
	printf("\n");
}

void PrintYh(int n){
	int form[20] = { 1 };

	int i, j;
	printf("1\n");
	for (i = 1; i < n; i++){
		printf("1 ");
		for (j = i; j > 0; j--){//�Ӻ���ǰ����ʼ��μӣ���һά�������ʽ������������
			form[j] += form[j - 1];
		}
		PrintArray(form, i + 1);
	}
}

int main(){
	PrintYh(10);
	system("pause");
	return 0;
}