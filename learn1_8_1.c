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
	printf("�����ַ�������n��");
	scanf("%d", &n);
	printf("����%d���ַ�����", n);
	for (i = 0; i<n; i++){
		scanf("%s", string[i]);
		s[i] = string[i];
	}
	x = max_len(s, n);
	printf("ָ������������ַ�������Ϊ��%d", x);
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