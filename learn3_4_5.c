#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//��д���������Ͼ����в���ĳ�������Ƿ����

int main() {
	int a[4][6] = {
		{1,2,3,4,5,6},
	{1,3,5,7,8,11,},
	{4,6,9,14,15,19},
	{10,21,23,33,56,57}
	};
	int k = 19;
	int row = 0;
	int col = 5;
	int i;
	while (a[row][col] < k)
	{
		row++;
	}
	for (i = 0; i < 6; i++) {
		if ((a[row][i] == k)&&i<6)
		{
			i = 7;
			printf("�����������\n");
		}
	}
	if (i == 6) {
		printf("�����������\n");
	}
	system("pause");
	return 0;
}
