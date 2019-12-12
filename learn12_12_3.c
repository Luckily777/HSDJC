#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int Max(int x, int y){
	int z;
	if (x > y){
		z = x;
	}
	else {
		z = y;
	}
	return (z);
}

int Min(int x, int y){
	int z;
	if (x < y){
		z = x;
	}
	else {
		z = y;
	}
	return (z);
}

int main(){
	int(*p)(int, int);//定义指向函数的指针变量
	int a, b, c, n;
	printf("please enter a and b:");
	scanf("%d,%d", &a, &b);
	printf("please choose 1 or 2");
	scanf("%d", &n);
	if (n == 1){
		p = Max;
	}
	else if(n==2){
		p = Min;
	}
	c = (*p)(a, b);//调用p指向的函数
	printf("a=%d,b=%d\n", a, b);
	if (n == 1){
		printf("max=%d\n", c);
	}
	else{
		printf("min=%d\n", c);
	}
	system("pause");
	return 0;
}