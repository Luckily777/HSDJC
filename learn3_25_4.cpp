#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <iostream>
using namespace std;

int main() {
	//1.
	//const int i = 0;
	//int* j = (int*)&i;
	//*j = 1;
	//printf("%d,%d", i, *j);

	//2.
	/*int b = 10, a = -11;
	a %= b %= 4;
	printf("%d %d\n", a, b);*/

	//3.
	/*int a = 177;
	printf("%o\n", a);*/

	//4.
	char c;
	scanf("%c", &c);
	switch (c)
	{
	case '1':
		printf("1");
	case '2':
		printf("2");
			case '3' :
				printf("3");
	default:
		printf("error");
	}
	system("pause");
	return 0;
}