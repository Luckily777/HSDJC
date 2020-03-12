#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
// strstr查找自创
//#include <iostream>
//using namespace std;

const char* Strstr(const char* str1, const char* str2) {
	// 最简单粗暴的方式, 穷举/暴力枚举
	assert(str1 != NULL && str2 != NULL);

	if (*str2 == '\0') {
		// 此时说明 str2 是一个空字符串
		return NULL;
	}

	const char* black = str1;
	while (*black != '\0') {
		const char* red = black;
		const char* sub = str2;
		while (*red != '\0' && *sub != '\0' && (*red == *sub)) {
			red++;
			sub++;
		}
		// 当上面的循环结束, 可能有三种情况:
		// 1. red 遇到 \0
		// 2. sub 遇到 \0
		// 3. *red 和 *sub 不相等
		if (*sub == '\0') {
			// 找到匹配的子串
			return black;
		}
		// 这个 if 和上面不能交换!!!
		// 此处的条件意味着 *sub != '\0' && *red == '\0'
		if (*red == '\0') {
			// 此时 str1 不可能包含 str2 了
			return NULL;
		}
		// 继续处理下次循环的匹配情况
		black++;
	}
	// 没有找到匹配的子串
	return NULL;
}

int main() {
	char str1[] = "hello world world world";
	char str2[] = "world";
	char* ret = Strstr(str1, str2);
	printf("%p, %p\n", str1, ret);
    system("pause");
    return 0;
}