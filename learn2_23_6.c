#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>
// strstr ��һ�����Ƚ���һ����֮���Ƿ�����Ŵ˴�

const char* my_strstr(const char* src, const char* sub){
	assert(src&&sub);

	const char* srci = src;
	const char* subi = sub;
	while (*srci!='\0')
	{
		while (*srci==*subi&&*subi!='\0')
		{
			++srci;
			++subi;
		}
		if (*subi=='\0')
		{
			return src;
		}
		else
		{
			subi = sub;
			++src;
			srci = src;
		}
	}
	return NULL;
}



int main(){
	char *p1 = "abcde";
	char *p2 = "deabc";
	char p3[11];
	strcpy(p3, p1);
	strcat(p3, p1);
	if (my_strstr(p3, p2) != NULL)
	{
		printf("����ת�ַ���\n");
	}
	else
	{
		printf("������ת�ַ���\n");
	}
	system("pause");
	return 0;
}