#include <stdio.h>
#include <stdlib.h>
int main(){
	int arr[4] = { 1, 2, 3, 4 };
	int* p1 = &arr[0];
	int* p2 = &arr[2];
	int ret = p2 - p1;
	printf("%p\n%p\n", p1,p2);//打印两个指针的地址

	printf("ret=%d\n", ret);//打印两个指针相减之差

	system("pause");
	return 0;
}