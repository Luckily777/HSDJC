#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//#include <iostream>
//using namespace std;

enum ENUM_A
{
	X1,
	Y1,
	Z1 = 255,
	A1,
	B1,
};
enum ENUM_A enumA = Y1;
enum ENUM_A enumB = B1;


int main()
{
	printf("%d %d\n", enumA, enumB);
	system("pause");
	return 0;
}