#include <stdio.h>
#include <stdlib.h>
// 错误纠正
//int a = 0;


//struct A
//{
//	int a1;
//	int a2;
//};

enum Colour {
	RED, 
	BLACK,
};

int main() {

	//1. 
	//int a = 1;
	//printf("%d\n", a);//访问局部
	//printf("%d\n", ::a);//访问全局

	//2. 
	//struct A a;
	/*enum Colour col1 = RED;
	int col2 = RED;

	col1 = 3;
	col2 = 3;*/


	//3. shuzu
	//char p[] = "hello";
	//strlen(p);//keyi 是char*
	//strlen(*p);// bukeyi  *p 是char类型
	

	//4.
	int a = 0;
	int* p = (int*)malloc(sizeof(int));
	printf("栈%p\n", &a);
	printf("堆%p\n", p);
	//  栈在堆的下面
	system("pause");
	return 0;
}