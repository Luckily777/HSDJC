#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//二维指针


int main(){
	int a[3][4] = { 0 };//12
	printf("%d\n", sizeof(a));//48
	printf("%d\n", sizeof(a[0][0]));//4
	printf("%d\n", sizeof(a[0]));//16 数组名
	printf("%d\n", sizeof(a[0] + 1));//4 数组名+1 指针
	printf("%d\n", sizeof(*(a[0] + 1)));//4 int* 解引用则为int
	printf("%d\n", sizeof(a + 1));//4！！！ 第零行的数组指针 +1还是指针
	printf("%d\n", sizeof(*(a + 1)));//16 数组指针+1 解引用是一个数组
	printf("%d\n", sizeof(&a[0] + 1));//4
	printf("%d\n", sizeof(*(&a[0] + 1)));//16  数 组指针+1 解引用是一个数组
	printf("%d\n", sizeof(*a));//16 解引用是一个数组
	printf("%d\n", sizeof(a[3]));//16 
	system("pause");
	return 0;
}