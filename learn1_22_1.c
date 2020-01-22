#include <stdio.h>
#include <stdlib.h>


int main()
{
	int s[4][4] = { 0 };
	printf("%d\n", *(*s + 2) + 2);
	printf("%d", (*(s + 2))[2]);
	system("pause");
	return 0;
}