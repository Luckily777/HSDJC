#include <stdio.h>
#include <stdlib.h>
//
int main(){
	int a[5] = { 1, 2, 3, 4, 5 };
	int *ptr = (int*)(&a + 1);//强转成为int * 表示指向5后面的那个元素
	printf("%d %d\n", *(a + 1), *(ptr - 1));// 2 5
	system("pause");
	return 0;
}