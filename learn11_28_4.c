#include <stdio.h>
#include <stdlib.h>

int Func(int arr[], int size){
	int numCount[100] = { 0 };
	for (int i = 0; i < size; i++){
		numCount[arr[i]]++;//������ҪѰ�ҵ����鵱���ڲ����飬Ѱ�ҵ�һ�κ��һ�������ڶ�Σ��򲻵���1��
	}
	for (int i = 0; i < 100; i++){
		if (numCount[i] == 1){
			return i;
		}
	}
}

int main(){
	int arr[5] = { 1, 2, 1, 2, 3 };
	int n = Func(arr, 5);
	printf("%d", n);
	system("pause");
	return 0;
}