#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//����ָ��

void test(){
	printf("hehe\n");
}

int main(){
	printf("%p\n", test);//����ָ��
	printf("%p\n", &test);//

	int a[10];
	int(*pa)[10] = &a;

	//����ָ�����
	void(*pf)() = test;
	//����
	test();
	(*pf)();
	pf();
	system("pause");
	return 0;
}