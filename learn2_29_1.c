#include <stdio.h>
#include <stdlib.h>
// �������
//int a = 0;


//struct A
//{
//	int a1;
//	int a2;
//};

enum Colour {
	RED, 
	BLACK,
};

int main() {

	//1. 
	//int a = 1;
	//printf("%d\n", a);//���ʾֲ�
	//printf("%d\n", ::a);//����ȫ��

	//2. 
	//struct A a;
	/*enum Colour col1 = RED;
	int col2 = RED;

	col1 = 3;
	col2 = 3;*/


	//3. shuzu
	//char p[] = "hello";
	//strlen(p);//keyi ��char*
	//strlen(*p);// bukeyi  *p ��char����
	

	//4.
	int a = 0;
	int* p = (int*)malloc(sizeof(int));
	printf("ջ%p\n", &a);
	printf("��%p\n", p);
	//  ջ�ڶѵ�����
	system("pause");
	return 0;
}