#include <stdio.h>
#include <stdlib.h>
//数组传参
void test1(int* arr, int n)//  常用
{
	printf("%d", sizeof(arr));
}

void test2(int arr[10],int n)//arr是指针 C语言传参不存在传数组的问题
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