#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(){
	int year, leap;
	printf("������ݣ�");
	scanf("%d", &year);
	if (year % 4 == 0){//�ܹ���4����
		if (year % 100 == 0){//�ܹ���100����
			if (year % 400 == 0)//�ܹ���400����
				leap = 1;//������������ʱ leap��ֵΪ1
			else
				leap = 0;//����ֵΪ0
		}
		else
			leap = 1;
	}
	else
		leap = 0;
	if (leap)//leapΪ�������Ϊ���꣬�����෴
		printf("%d is", year);
	else
		printf("%d not is", year);
	system("pause");
	return 0;
}
