#include <stdio.h>
#include <stdlib.h>
//���ýṹ�������
#pragma pack(1)

struct S1
{
	char a;
	int b;
	char c;
}s;


#pragma pack()  //ȡ������ط��Ķ���

struct S2
{
	char a;
	int b;
	char c;
};

int main() {

	printf("%d", sizeof(struct S1));
	printf("%d", sizeof(struct S2));
	system("pause");
	return 0;
}