#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	double sum = 0, sum_down = 0, sum_up = 0, h = 0;
	double i;
	for (i = 0.0; i <= 9.0; i++){
		sum_down =sum_down+ 100*pow(1.0/ 2.0, i);//����ÿһ��������ܾ��룻
	}
	for (i = 1.0; i <= 9.0; i++){
		sum_up = sum_up+100*pow(1.0 / 2.0, i);//����ÿһ���������ܾ��룻
	}
	sum = sum_down + sum_up;//�����ܾ��룻
	h = 100*pow(1.0 / 2.0, 10);//�����ʮ�ε������ĸ߶�
	printf("�ڵ�ʮ����أ�һ��������%lf��\n", sum);
	printf("��ʮ���ٵ��� ��%lf��\n.", h);
	system("pause");
	return 0;
}