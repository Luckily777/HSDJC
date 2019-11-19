#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

void Print(int arr[], int n){//��ӡ

	int i;
	for (i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
}

void Init(int arr[], int str[],int n){//��ʼ��
	int i;
	for (i = 0; i < n; i++){
		arr[i] = str[i];
	}
}

void Empty(int arr[], int n){//����
	memset(arr, 0, sizeof(int)*n);
}

void reserve(int arr[], int n){//��������
	int i, j;
	int temp=0;
	for (i = 0, j = n - 1; i < j; i++, j--){
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
}

int main(){
	int arr[10];
	int str[10] = { 2, 5, 8, 9, 10, 15, 19, 21, 25, 27 };
	Init(arr, str, 10);//��ʼ��
	Print(arr, 10);//��ӡ
	printf("\n");
	reserve(arr, 10);//����
	Print(arr, 10);//��ӡ
	printf("\n");
	Empty(arr, 10);//����
	Print(arr, 10);//��ӡ
	printf("\n");
	system("pause");
	return 0;


}