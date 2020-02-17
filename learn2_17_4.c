#include <stdio.h>
#include <stdlib.h>

//&数组名or数组名 


int main(){
	int arr[10] = { 0 };
	printf("%p\n", arr);//首元素的地址
	printf("%p\n", &arr);//数组的地址
	printf("%p\n", arr+1);//首元素的地址+1
	printf("%p\n", &arr+1);//数组指针的地址+1

	int *p1 = arr;
	int(*p2)[10] = &arr;//数组指针转为数组指针
	system("pause");
	return 0;
}