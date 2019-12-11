#include <stdio.h>
#include <stdlib.h>

int main(){
	int arr[] = { 1, 2, 3, 4 };
	printf("%d\n", sizeof(arr));// 整个数组的大小
	printf("%d\n", sizeof(arr+0));//隐式转换为指针 ，表示第一个元素的大小
	printf("%d\n", sizeof(*arr));// 数组指针，全部为4
	printf("%d\n", sizeof(arr+1));// 同2一样
	printf("%d\n", sizeof(&arr));//取arr的地址，则也为数组指针
	printf("%d\n", sizeof(*&arr));//16  数组指针的解引用
	printf("%d\n", sizeof(&*arr));//4  针对int来取&
	printf("%d\n", sizeof(&arr+1));//4数组指针+1
	printf("%d\n", sizeof(&arr[0]));//4 int*
	system("pause");
	return 0;
}