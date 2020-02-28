#include <stdio.h>
#include <stdlib.h>
//calloc 动态扩容

int main() {
	int* p1 = (int*)malloc(sizeof(int) * 10);
	p1[0] = 0;
	p1[1] = 1;
	int* p2 = (int*)calloc(10, sizeof(4));// 开空间的同时完成赋值
	
										  
	//不要了都是free
	//free(p1);
	//free(p2);

	//扩容
	int* p3 = realloc(p1, sizeof(int) * 20);
	printf("%p\n", p1);
	printf("%p\n", p3);// 原地扩容 地址相同，则是直接往后扩容不是重开的

	printf("%d\n", p3[0]);
	printf("%d\n", p3[1]);


	int* p4 = realloc(p1, sizeof(int) * 2000);
	printf("%p\n", p4); // 重新找了一块空间 

	printf("%d\n", p4[0]);
	printf("%d\n", p4[1]);

	system("pause");
	return 0;
}