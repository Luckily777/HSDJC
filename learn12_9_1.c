#include <stdio.h>
#include <stdlib.h>
int main(){
	double* p = (double*)0x100;//��ַ
	printf("%p\n", p + 1);//ָ��+1 ���ǵ�ַ��1
	system("pause");
	return 0;
}
