#include <stdio.h>
#include <stdlib.h>

struct mybitfields
{
	unsigned short a : 4;
	unsigned short b : 5;
	unsigned short c : 7;
} test;


int main(){
	int i;
	test.a = 2;
	test.b = 3;
	test.c = 0;

	i = *((short *)&test);
	printf("%d\n", i);
	system("pause");
	return 0;

}