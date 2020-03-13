#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
// 
//#include <iostream>
//using namespace std;

int a, b;
void fun()
{
	a = 100;
	b = 200;
}

int main() {
	int a = 5, b = 7;
	fun();
	printf(" %d %d\n", a, b);
	system("pause");
	return 0;
}