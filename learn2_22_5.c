#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//��άָ��


int main(){
	int a[3][4] = { 0 };//12
	printf("%d\n", sizeof(a));//48
	printf("%d\n", sizeof(a[0][0]));//4
	printf("%d\n", sizeof(a[0]));//16 ������
	printf("%d\n", sizeof(a[0] + 1));//4 ������+1 ָ��
	printf("%d\n", sizeof(*(a[0] + 1)));//4 int* ��������Ϊint
	printf("%d\n", sizeof(a + 1));//4������ �����е�����ָ�� +1����ָ��
	printf("%d\n", sizeof(*(a + 1)));//16 ����ָ��+1 ��������һ������
	printf("%d\n", sizeof(&a[0] + 1));//4
	printf("%d\n", sizeof(*(&a[0] + 1)));//16  �� ��ָ��+1 ��������һ������
	printf("%d\n", sizeof(*a));//16 ��������һ������
	printf("%d\n", sizeof(a[3]));//16 
	system("pause");
	return 0;
}