#include <stdio.h>
#include <stdlib.h>

int main()
{
	unsigned long val = 0;
	char a = 0x48;
	char b = 0x52;
	val = b << 8 | a;
	printf("%d\n", val);
	system("pause");
	return 0;
}