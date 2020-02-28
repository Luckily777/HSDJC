#include <stdio.h>
#include <stdlib.h>

void f2(int a,int b) {
	
	printf("f2:%p\n", &a);
	printf("f2:%p\n", &b);
}

void f1() {
	int a = 10;
	int b = 20;
	printf("f1:%p\n", &a);
	printf("f1:%p\n", &b);
	f2(a, b);
}

//全局变量 被放置到
int a = 0;
int b = 0;

int main() {
	
	//栈
	int a = 10;
	int b = 20;
	printf("main:%p\n", &a);
	printf("main:%p\n", &b);
	f1();

	//访问等于0的a和b
	printf("main:%p\n", :: a);
	printf("main:%p\n",::b);


	//堆
	void* p1 = malloc(4);  //p1 放在栈  *p1 放在堆 
	void* p2 = malloc(4);
	printf("p1:%p\n", &a);
	printf("p2:%p\n", &b);


	// 
	char* p4 = "hello"; //p4在栈 *p4在堆 hello 在常量区


	system("pause");
	return 0;
}