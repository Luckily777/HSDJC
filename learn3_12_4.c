#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
// strstr�����Դ�
//#include <iostream>
//using namespace std;

const char* Strstr(const char* str1, const char* str2) {
	// ��򵥴ֱ��ķ�ʽ, ���/����ö��
	assert(str1 != NULL && str2 != NULL);

	if (*str2 == '\0') {
		// ��ʱ˵�� str2 ��һ�����ַ���
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
		// �������ѭ������, �������������:
		// 1. red ���� \0
		// 2. sub ���� \0
		// 3. *red �� *sub �����
		if (*sub == '\0') {
			// �ҵ�ƥ����Ӵ�
			return black;
		}
		// ��� if �����治�ܽ���!!!
		// �˴���������ζ�� *sub != '\0' && *red == '\0'
		if (*red == '\0') {
			// ��ʱ str1 �����ܰ��� str2 ��
			return NULL;
		}
		// ���������´�ѭ����ƥ�����
		black++;
	}
	// û���ҵ�ƥ����Ӵ�
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