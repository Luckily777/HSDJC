#include <stdio.h>
#include <stdlib.h>

struct test
{
	int ml;
	char m2; float m3;
	union uu
	{
		char ul[5]; int u2[2];
	} ua;
} myaa;


void main()
{
	printf("%d\n",sizeof(struct test));
	system("pause");
}
