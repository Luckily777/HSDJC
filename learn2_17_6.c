#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//字符数组


int main(){
	char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n", sizeof(arr));//6 特殊 数组的大小
	printf("%d\n", sizeof(arr + 0));//!!!4 char * 指针
	printf("%d\n", sizeof(*arr));//1
	printf("%d\n", sizeof(arr[1]));//1
	printf("%d\n", sizeof(&arr));// 4数组指针 则为4 
	printf("%d\n", sizeof(&arr + 1));// 4
	printf("%d\n", sizeof(&arr[0] + 1));//4 +1之后还是指针
	printf("%d\n", strlen(arr));// 随机值19
	printf("%d\n", strlen(arr + 0));// 随机值19
	printf("%d\n", strlen(*arr));// 编译不通过
	printf("%d\n", strlen(arr[1]));// 编译不通过
	printf("%d\n", strlen(&arr));// 编译不通过
	printf("%d\n", strlen(&arr + 1));//编译不通过
	printf("%d\n", strlen(&arr[0] + 1));// 随机值18

	system("pause");
	return 0;
}