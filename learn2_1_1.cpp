#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

void fun1(int &x) {
	x++;
}

void fun2(int x) {
	x++;
}

int main() {
	int abc = 100, xyz = 13;
	fun1(xyz);
	abc = xyz;
	fun2(abc);
	printf("%d\n", abc);
	system("pause");
	return 0;
}