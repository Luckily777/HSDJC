#include <stdio.h>
#include <stdlib.h>
//���鴫��
void test1(int* arr, int n)//  ����
{
	printf("%d", sizeof(arr));
}

void test2(int arr[10],int n)//arr��ָ�� C���Դ��β����ڴ����������
{
	printf("%d", sizeof(arr));
}

void test3(int arr[], int n)
{
	printf("%d", sizeof(arr));
}

int main(){
	int arr[10] = { 0 };
	test1(arr, 10);
	test2(arr, 10);
	system("pause");
	return 0;
}