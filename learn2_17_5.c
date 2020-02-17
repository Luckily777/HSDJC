#include <stdio.h>
#include <stdlib.h>

//指针和数组


int main(){
	int a[] = { 1, 2, 3, 4 };
	printf("%d\n", sizeof(a));//16 特殊 数组的大小
	printf("%d\n", sizeof(a+0));//4
	printf("%d\n", sizeof(*a));//4
	printf("%d\n", sizeof(a+1));//4
	printf("%d\n", sizeof(a[1]));//4
	printf("%d\n", sizeof(&a));//4 数组指针 则为4
	printf("%d\n", sizeof(*&a));//16 数组指针 解引用是个数组 
	printf("%d\n", sizeof(&a+1));// 4
	printf("%d\n", sizeof(&a[0]));// 4第一个元素的地址 是个指针
	printf("%d\n", sizeof(&a[0]+1));//4 +1之后还是指针
	system("pause");
	return 0;
}