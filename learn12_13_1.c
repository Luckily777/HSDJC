#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void check(int *p){//����check�������β���int* ָ��
	int i;
	printf("They are fail:");
	for (i = 0; i < 5; i++)
	{
		if (p[i] < 60){
			printf("%d", p[i]);//������ϸ�ĳɼ�
		}
	}
	printf("\n");
}

int main(){
	int* p1, i;//����p1Ϊint��ָ��
	p1 = (int *)malloc(5 * sizeof(int));//���ٶ�̬�ڴ棬����ַת����int* �ͣ�Ȼ������p1��
	for (i = 0; i < 5; i++){
		scanf("%d", p1 + i);
	}
	check(p1);
	system("pause");
	return 0;
}