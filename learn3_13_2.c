#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
// 
//#include <iostream>
//using namespace std;

int funa(int a, int b)
{
	return a + b;
}


int funb(int a, int b)
{
	return a - b;
}


int sss(int (*t)(int, int), int x, int y)
{
	return(*t)(x, y);
}

int main() {
	int x;
	x = sss(funa, 9, 3);
	x += sss(funb, 8, 3);
	printf("%d\n", x);
	system("pause");
	return 0;
}