#include <stdio.h>
#include <stdlib.h>

void Factor(int a[], int n){
	int i, j;
	int temp = 0;
	for (i = 0; i <= n - 1; i++){
		for (j = 0; j < i; j++){
			if (a[j]>a[j + 1]){
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}

int main(){
	int i;
	int a[10] = { 2, 4, 6, 8, 0, 1, 3, 5, 7, 9 };
	FILE *f;//�����ļ�ָ���׵�ַ
	if ((f = fopen("myf1.out", "w")) == NULL){//��ֻд�ķ�ʽ���ļ���
		printf("can not open file.\n");
		exit(0);
	}
	Factor(a, 10);
	for (i = 0; i < 10; i++){
		printf("%4d ", a[i]);//��ӡ��ʾ����Ļ�ϣ�
		fprintf(f, "%d4 ", a[i]);//������ļ�֮�У�
	}
	fclose(f);// �мǣ�һ��Ҫ�����ر��ļ���
	system("pause");
	return 0;
}