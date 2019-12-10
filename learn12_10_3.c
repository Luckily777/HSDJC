#include <stdio.h>
#include <stdlib.h>

int main(){
	int a = 100;
	int b = 10;
	int *p1, *p2;//定义指针
	p1 = &a;//将a的地址赋给指针变量p1
	p2 = &b;//将b的地址赋给指针变量p2
	printf("a=%d,b=%d\n", a, b);
	printf("*p1=%d,*p2=%d\n", *p1, *p2);
	system("pause");
	return 0;
}