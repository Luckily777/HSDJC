#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void swap(int* qt1, int* qt2){
	int temp;
	temp = *qt1;//��*qt1��*qt2��ֵ
	*qt1 = *qt2;
	*qt2 = temp;
}

void exchange(int *q1, int *q2, int *q3){
	if (*q1 < *q2){
		swap(q1, q2);
	}
	if (*q1 < *q3){
		swap(q1, q3);
	}
	if (*q2 < *q3){
		swap(q2, q3);
	}
}


int main(){
	int a, b, c;
	int *p1, *p2, *p3;//����ָ��
	printf("please enter three numbers:");
	scanf("%d%d%d", &a, &b, &c);
	p1 = &a;//��a�ĵ�ַ����ָ�����p1
	p2 = &b;//��b�ĵ�ַ����ָ�����p2
	p3 = &c;
	exchange(p1, p2, p3);
	printf("The order :%d %d %d\n", a,b,c);
	system("pause");
	return 0;
}