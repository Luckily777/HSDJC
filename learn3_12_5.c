#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
// �ָ�
//#include <iostream>
//using namespace std;

int main() {
	char str[] = "This a simple string";
// �˴�ʹ�� " " ��Ϊ�ָ��
// ������ַ�����û�ҵ��ָ��, �ͷ��� NULL
	char* pch = strtok(str, " ");
	while (pch != NULL) {
	printf("%s\n", pch);
	// ��һ�������� NULL ��ʾ�����ϴ��зֵ�λ��, �����з�
	pch = strtok(NULL, " ");
	}
	system("pause");
	return 0;
}