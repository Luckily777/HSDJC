#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <iostream>
using namespace std;


int main() {
	//1.
	/*char c = '0';
	printf("%d %d", sizeof(c), sizeof(char));*/

	//2.
	/*char* a[] = { "hello", "the", "world" };
	char** pa = a;
	pa++;
	cout << *pa << endl;*/

	//3.
	char str[] = "xunlei";
	char* p = str;
	int n = 10;
	printf("%d, %d, %d\n", sizeof(str), sizeof(p), sizeof(n));
	system("pause");
	return 0;
}