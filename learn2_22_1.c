#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//����ָ������

int main(){
	int(*parr3[10])[5];
	printf("%d\n", sizeof(parr3));//40
	int a1[5];
	//parr3[0] = a1; ����ͨ�� ��Ϊ����֮����ָ��
	parr3[1] = &a1;
	system("pause");
	return 0;
}