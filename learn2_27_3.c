#include <stdio.h>
#include <stdlib.h>
// ¶ÎÎ»

struct S
{
	int _a : 2;
	int _b : 5;
	int _c : 10;
	int _d : 30;
};

struct B
{
	int a : 3;
	int b : 4;
	int c : 5;
	int d : 4;
};



int main() {

	printf("%d", sizeof(struct S));

	struct B bb = { 0 };
	bb.a = 10;
	bb.b= 12;
	bb.c = 3;
	bb.d = 4;
	system("pause");
	return 0;
}