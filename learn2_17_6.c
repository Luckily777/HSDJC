#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//�ַ�����


int main(){
	char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n", sizeof(arr));//6 ���� ����Ĵ�С
	printf("%d\n", sizeof(arr + 0));//!!!4 char * ָ��
	printf("%d\n", sizeof(*arr));//1
	printf("%d\n", sizeof(arr[1]));//1
	printf("%d\n", sizeof(&arr));// 4����ָ�� ��Ϊ4 
	printf("%d\n", sizeof(&arr + 1));// 4
	printf("%d\n", sizeof(&arr[0] + 1));//4 +1֮����ָ��
	printf("%d\n", strlen(arr));// ���ֵ19
	printf("%d\n", strlen(arr + 0));// ���ֵ19
	printf("%d\n", strlen(*arr));// ���벻ͨ��
	printf("%d\n", strlen(arr[1]));// ���벻ͨ��
	printf("%d\n", strlen(&arr));// ���벻ͨ��
	printf("%d\n", strlen(&arr + 1));//���벻ͨ��
	printf("%d\n", strlen(&arr[0] + 1));// ���ֵ18

	system("pause");
	return 0;
}