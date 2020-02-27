#include <stdio.h>
#include <stdlib.h>
//设置结构体对齐数
#pragma pack(1)

struct S1
{
	char a;
	int b;
	char c;
}s;


#pragma pack()  //取消这个地方的对齐

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