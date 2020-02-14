#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//力扣对于字符串的2进制加法

int main(){
	char *a = "1111";
	char *b = "10";
	char c[1];
	int x, y, z;
	x = strtol(a, NULL, 2);
	y = strtol(b, NULL, 2);
	z = x + y;
	printf("%s\n", _itoa(z, c, 2));
	system("pause");
	return 0;
}