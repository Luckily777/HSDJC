#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//#include <iostream>
//using namespace std;

unsigned long fun(unsigned long n)
{
	unsigned long x = 0; int t;
	while (n)
	{
		t = n % 10;
		/********** found **********/
		if (t % 2 == 0)
			/********** found **********/
			x = x*10 + t;
		/********** found **********/
		n = n/10;
	}
	return x;
}

int main()
{
	//int c = 0, k;
	//for (k = 1; k < 3; k++)
	//	switch (k)
	//	{
	//	default:c += k;
	//	case 2:c++;
	//		break;
	//	case 4:c += 2;
	//		break;
	//	}
	//printf("%d\n", c);

	printf("%d\n", fun(123));

	system("pause");
	return 0;
}