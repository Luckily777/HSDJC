#include <stdio.h>
#include <stdlib.h>

int main(){
	int num = 10;
	int* p = &num;//����������/��ӷ��������
	//���ݵ�ַ�ҵ���Ӧ��ֵ
	*p = 5;
	printf("%d\n", *p);
	system("pause");
	return 0;

}