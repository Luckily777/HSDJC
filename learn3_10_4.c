#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char ss[10] = "1,2,3,4,5";
	gets(ss);
	strcat(ss, "6789");
	printf("%s\n", ss);
	system("pause");
	return 0;
}