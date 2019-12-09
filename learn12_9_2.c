#include <stdio.h>
#include <stdlib.h>
int main(){
	int arr[4] = { 1, 2, 3, 4 };
	int* p = &arr[0];
	printf("%p\n", arr[1]);//打印第一个的地址

	printf("%d\n", p[1]);//打印数组的第一个值
	printf("%p\n", (*p + 1));//指针+1 则是地址0加1
	system("pause");
	return 0;
}
