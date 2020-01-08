#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int max_len(char*s[], int n);
int main(void)
{
	char* s[10];
	char string[10][100];
	int n;
	int i;
	int x;
	printf("输入字符串个数n：");
	scanf("%d", &n);
	printf("输入%d个字符串：", n);
	for (i = 0; i<n; i++){
		scanf("%s", string[i]);
		s[i] = string[i];
	}
	x = max_len(s, n);
	printf("指针数组中最长的字符串长度为：%d", x);
	return 0;
}
max_len(char*s[], int n)
{
	int i;
	int x;
	x = strlen(s[0]);
	for (i = 1; i<n; i++){
		if (strlen(s[i]) > x )
			x = strlen(s[i]);
	}
	return x;
}