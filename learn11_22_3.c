#include <stdio.h>
#include <stdlib.h>

int main(){
	int a = 12;
	int b;
	b = ~a;
	printf("��aȡ���õ�bΪ��%d\n",b);
	a = ~a;
	printf("��aȡ���õ���%d\n",a);
	system("pause");
	return 0;
}