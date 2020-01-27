#include <stdio.h>
#include <stdlib.h>


int main()
{
	int a = -32769;
	printf("%8U\n", a);
	system("pause");
	return 0;

	//在16位下打印出来的是8U
}