#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	char str[60];
	scanf("%[0-9]", str);//ֻ��ȡ��������֣�
	printf("%s", str);
	system("pause");
	return 0;
}