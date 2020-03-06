#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//

int fun(char s[])
{
	char* p = s;
	while (*p != 0) p++;
	return (p - s);
}

int main() {
	printf("% d\n ", fun("OABCDEF"));
	system("pause");
	return 0;
}
