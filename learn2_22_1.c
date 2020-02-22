#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//数组指针数组

int main(){
	int(*parr3[10])[5];
	printf("%d\n", sizeof(parr3));//40
	int a1[5];
	//parr3[0] = a1; 不能通过 因为数组之中是指针
	parr3[1] = &a1;
	system("pause");
	return 0;
}