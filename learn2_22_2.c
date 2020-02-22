#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//函数指针

void test(){
	printf("hehe\n");
}

int main(){
	printf("%p\n", test);//函数指针
	printf("%p\n", &test);//

	int a[10];
	int(*pa)[10] = &a;

	//函数指针变量
	void(*pf)() = test;
	//调用
	test();
	(*pf)();
	pf();
	system("pause");
	return 0;
}