#include <stdio.h>
#include <stdlib.h>
//
struct Test
{
	int Num;
	char *pcName;//ָ��
	short sDate;
	char cha[2];
	short sBa[4];
}*p;
// ����p��ֵΪ0x100000 ���±��ʽ��ֵ�ֱ�Ϊ���٣�

int main(){
	printf("%p\n", p + 0x1);//0x100014 ��һ������ 20
	printf("%p\n", (unsigned long)p + 0x1);//0x100001 ��ַ��1
	printf("%p\n", (unsigned int*)p + 0x1);//0x100004 ָ��+1
	system("pause");
	return 0;
}