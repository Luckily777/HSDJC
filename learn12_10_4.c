#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(){
	int a, b;
	int *p1, *p2, *p;//����ָ��
	scanf("%d%d", &a, &b);
	p1 = &a;//��a�ĵ�ַ����ָ�����p1
	p2 = &b;//��b�ĵ�ַ����ָ�����p2
	if (a < b){
		p = p1;
		p1 = p2;
		p2 = p;
	}
	//���߽��任��p1=&b��p2=&a��
	printf("a=%d,b=%d\n", a, b);
	printf("max=%d,min=%d\n", *p1, *p2);
	system("pause");
	return 0;
}