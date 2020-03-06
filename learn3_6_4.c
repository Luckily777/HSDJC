#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


#pragma pack(2)
struct Test1
{
	int a;
	char b;
	short c;
	int* d;
}A;
#pragma pack()

#pragma pack(4)
struct Test2
{
	int* d;
	char b;
	int a;
	short c;
}B;
#pragma pack()

int main() {
	printf("%d,%d\n", sizeof(A), sizeof(B));
	system("pause");
	return 0;
}

