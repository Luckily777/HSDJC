#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
// 分割
//#include <iostream>
//using namespace std;

int main() {
	char str[] = "This a simple string";
// 此处使用 " " 作为分割符
// 如果在字符串中没找到分割符, 就返回 NULL
	char* pch = strtok(str, " ");
	while (pch != NULL) {
	printf("%s\n", pch);
	// 第一个参数传 NULL 表示继续上次切分的位置, 往后切分
	pch = strtok(NULL, " ");
	}
	system("pause");
	return 0;
}