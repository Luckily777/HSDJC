#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
// 
//#include <iostream>
//using namespace std;


int main() {
	int a[5] = { 1,2,3,4,5 };
	int* ptr = (int*)(&a + 1);
	printf("%d,%d", *(a + 1), *(ptr - 1));
	system("pause");
	return 0;
}