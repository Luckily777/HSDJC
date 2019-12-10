#include <stdio.h>
#include <stdlib.h>

int main(){
	int arr[4] = { 1, 2, 3, 4 };
	int(*p)[4] = &arr;//数组指针
	printf("%p\n", &arr[0]);//数组指针的首地址
	printf("%p\n", arr+1);//数组指针整体加一
	printf("%p\n", &arr+1);//数组指针向后跳一
	system("pause");
	return 0;
}

