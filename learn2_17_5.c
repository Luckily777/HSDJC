#include <stdio.h>
#include <stdlib.h>

//ָ�������


int main(){
	int a[] = { 1, 2, 3, 4 };
	printf("%d\n", sizeof(a));//16 ���� ����Ĵ�С
	printf("%d\n", sizeof(a+0));//4
	printf("%d\n", sizeof(*a));//4
	printf("%d\n", sizeof(a+1));//4
	printf("%d\n", sizeof(a[1]));//4
	printf("%d\n", sizeof(&a));//4 ����ָ�� ��Ϊ4
	printf("%d\n", sizeof(*&a));//16 ����ָ�� �������Ǹ����� 
	printf("%d\n", sizeof(&a+1));// 4
	printf("%d\n", sizeof(&a[0]));// 4��һ��Ԫ�صĵ�ַ �Ǹ�ָ��
	printf("%d\n", sizeof(&a[0]+1));//4 +1֮����ָ��
	system("pause");
	return 0;
}