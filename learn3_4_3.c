#include <stdio.h>
#include <stdlib.h>


int main() {
	char* p1 = "abcde";
	char* p2 = "deabc";
	char p3[11];
	strcpy(p3, p1);
	strcat(p3, p1);
	if (strstr(p3, p2) != NULL)
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
