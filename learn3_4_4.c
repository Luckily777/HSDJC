#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//实现一个函数，可以左旋字符串中的k个字符

int main() {
	int k = 1;
	char p1[] = "abcd";
	char p2[10] = {0};
	int n = strlen(p1);
	int j = 0;
	for (int i = k; i < n; i++)
	{
		p2[j++]=p1[i];
	}
	for (int i = 0; i < k; i++) {
		p2[j++] = p1[i];
	}
	printf("%s\n", p2);
	system("pause");
	return 0;
}
