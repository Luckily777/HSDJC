#include <stdio.h>
#include <stdlib.h>
int main(){
	int year = 0;
	for (year = 2000; year <= 2500; year++)
	{
		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))//�ܱ�4�����������ܹ���100�������������ܹ���400��������
			printf("%d  is ruinnian\n", year);//���������������������
		else
			printf("%d not is ruinian\n", year);//����������������ⲻ������
	}
	system("pause");
	return 0;
}
