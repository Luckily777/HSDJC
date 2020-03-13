#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
	char fun(char x, char y) {
		if (x < y)
			return x;
		return y;
	}
int main() {
	int a = '1', b = '1', c = '2';
	cout << fun(fun(a, b), fun(b, c));
	system("pause");
	return 0;
}