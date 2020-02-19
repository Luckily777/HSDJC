#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char arr[] = "abcdef";
	printf("%d\n", sizeof(arr));//7
	printf("%d\n", sizeof(arr+0));//4
	printf("%d\n", sizeof(*arr));//1
	printf("%d\n", sizeof(arr[1]));//1
	printf("%d\n", sizeof(&arr));//4
	printf("%d\n", sizeof(&arr+1));//4
	printf("%d\n", sizeof(&arr[0]+1));//4

	printf("%d\n", strlen(arr));//6
	printf("%d\n", strlen(arr + 0));//6
	printf("%d\n", strlen(*arr));//x
	printf("%d\n", strlen(arr[1]));//x
	printf("%d\n", strlen(&arr));//x   char(*)[7] shuzuzhizhen
	printf("%d\n", strlen(&arr + 1));//x  
	printf("%d\n", strlen(&arr[0] + 1));//5
	//int strlen(char * str)指针数组 //不能相互赋值 char(*)[7] 数组指针
	system("pause");
	return 0;
}