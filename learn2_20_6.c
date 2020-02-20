#include <stdio.h>
#include <stdlib.h>
//
struct Test
{
	int Num;
	char *pcName;//指针
	short sDate;
	char cha[2];
	short sBa[4];
}*p;
// 假设p的值为0x100000 如下表达式的值分别为多少？

int main(){
	printf("%p\n", p + 0x1);//0x100014 加一个类型 20
	printf("%p\n", (unsigned long)p + 0x1);//0x100001 地址加1
	printf("%p\n", (unsigned int*)p + 0x1);//0x100004 指针+1
	system("pause");
	return 0;
}