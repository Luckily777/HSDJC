#include <stdio.h>
#include <stdlib.h>

void f2(int a,int b) {
	
	printf("f2:%p\n", &a);
	printf("f2:%p\n", &b);
}

void f1() {
	int a = 10;
	int b = 20;
	printf("f1:%p\n", &a);
	printf("f1:%p\n", &b);
	f2(a, b);
}

//ȫ�ֱ��� �����õ�
int a = 0;
int b = 0;

int main() {
	
	//ջ
	int a = 10;
	int b = 20;
	printf("main:%p\n", &a);
	printf("main:%p\n", &b);
	f1();

	//���ʵ���0��a��b
	printf("main:%p\n", :: a);
	printf("main:%p\n",::b);


	//��
	void* p1 = malloc(4);  //p1 ����ջ  *p1 ���ڶ� 
	void* p2 = malloc(4);
	printf("p1:%p\n", &a);
	printf("p2:%p\n", &b);


	// 
	char* p4 = "hello"; //p4��ջ *p4�ڶ� hello �ڳ�����


	system("pause");
	return 0;
}