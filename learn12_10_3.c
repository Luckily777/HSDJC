#include <stdio.h>
#include <stdlib.h>

int main(){
	int a = 100;
	int b = 10;
	int *p1, *p2;//����ָ��
	p1 = &a;//��a�ĵ�ַ����ָ�����p1
	p2 = &b;//��b�ĵ�ַ����ָ�����p2
	printf("a=%d,b=%d\n", a, b);
	printf("*p1=%d,*p2=%d\n", *p1, *p2);
	system("pause");
	return 0;
}