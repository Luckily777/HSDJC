#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int factor(int x){//�����λ��
	int count = 1;
	for (x; x / 10 != 0; x /= 10){
		count += 1;
	}
	printf("%d", count);
	return (count);
}

void Factor(int a){//��λ���
	float n = factor(a);
	int i, j;
	printf("��λ���Ϊ:\n");
	for (n; n> 0; n--){
		i = a / pow(10, n - 1);
		j = i % 10;
		printf("%d ", j);
	}
}

void PrintNum(int num){
	int i;
	for (i = num; i; i /= 10)//��λ������
	{
		printf("%d ", i % 10);
	}

}
int main(){
	int x;
	printf("������һ����������λ��������:\n");
	scanf("%d", &x);
	factor(x);
	printf("\n");
	Factor(x);
	printf("\n");
	printf("����������������ÿһλ:\n");
	PrintNum(x);
	system("pause");
	return 0;
}