#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(){
	int a, b;
	int *p1, *p2, *p;//定义指针
	scanf("%d%d", &a, &b);
	p1 = &a;//将a的地址赋给指针变量p1
	p2 = &b;//将b的地址赋给指针变量p2
	if (a < b){
		p = p1;
		p1 = p2;
		p2 = p;
	}
	//或者将其换成p1=&b；p2=&a；
	printf("a=%d,b=%d\n", a, b);
	printf("max=%d,min=%d\n", *p1, *p2);
	system("pause");
	return 0;
}