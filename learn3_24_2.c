#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//#include <iostream>
//using namespace std;

// ͨ�� num1 �� num2 ������������ȡ�����ؽ��
void FindTwoNum(int arr[], int size, int* num1, int* num2) {
	// 1. ���������ְ�λ���һ��
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum ^= arr[i];
	}
	// ��ʱ sum ��ֵ�͵ȼ��� num1 ^ num2, ���������һ������ĳ������λ Ϊ 1
	// 2. �� sum �������һ������λΪ 1 ��λ
	int pos = 0;
	for (; pos < 32; pos++) {
		if ((sum & (1 << pos)) != 0) {
			break;
		}
	}
	// ѭ������֮��, pos ��ֵ��Ӧ�ı���λ��һ���� 1
	// 3. ���� pos λ�õ�Ԫ���� 1 ���� 0 ����������ֳ���������, �ֱ���а�λ���
	*num1 = 0;
	*num2 = 0;
	for (int i = 0; i < size; i++) {
		if ((arr[i] & (1 << pos)) == 0) {
			// pos λΪ 0 ��һ��
			*num1 ^= arr[i];
		}
		else {
			// pos λΪ 1 ��һ��
			*num2 ^= arr[i];
		}
	}
}

int main() {
	int arr[] = { 1,1,2,2,3,4,4,5,6,6 };
	int num1 = 0;
	int num2 = 0;
	FindTwoNum(arr, sizeof(arr) / sizeof(arr[0]), &num1, &num2);
	printf("%d %d", num1, num2);
	system("pause");
	return 0;
}