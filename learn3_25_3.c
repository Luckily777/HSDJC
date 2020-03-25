#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
//#include <iostream>
//using namespace std;

int main() {
	
	//1.
	/*int i = 0, a = 0;
	while (i < 20)
	{
		for (;;)
		{
			if ((i % 10) == 0) break;
			else i--;
		}
		i += 11; a += i;
	}
	printf("%d\n", a);*/


	//2.
	int i;

	for (i = 0; i < 3; i++)

		switch (i)
		{

		case 0:printf("%d", i);

		case 2:printf("%d", i);

		default:printf("%d", i);
		}
	system("pause");
	return 0;
}