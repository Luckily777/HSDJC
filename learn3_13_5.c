#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//#include <iostream>
//using namespace std;

int main() {
	int x = 6;
	x += x -= x * x;
	printf("%d", x);
	system("pause");
	return 0;
}