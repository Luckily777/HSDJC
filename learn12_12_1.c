#include <stdio.h>
#include <stdlib.h>

void average(float* p, int n){
	float* p_end;
	float sum = 0, aver;
	p_end = p + n - 1;//P_endָ�����һ��Ԫ��
	for (; p <= p_end; p++){
		sum +=(*p);
	}
	aver = sum / n;
	printf("average=%5.2f\n", aver);
}

void search(float(*p)[4], int n){//pָ������ĸ�Ԫ�ص�һά�����ָ��
	int i;
	printf("The score of No.%d are :\n");
	for (i = 0; i < 4; i++){
		printf("%5.2f  ", *(*(p + n) + i));//
	}
	printf("\n");
}

int main(){
	float score[3][4] = { { 65, 67, 70, 60 }, { 80, 87, 90, 81 }, { 90, 99, 100, 98 } };
	average(*score, 12);//��ʮ��������ƽ����
	search(score, 2);//�����Ϊ2��ѧ���ɼ�
	system("pause");
	return 0;
}