#include <stdio.h>
#include <stdlib.h>
//�������3 �ͷź󲻻�Ϊ��


int main() {

	char* str = (char*)malloc(100);
	strcpy(str, "hello");
	free(str);
	// �ͷź�һ������Ϊ��  
	// ���ʹ��str=NULL;
	if (str != NULL)
	{
		strcpy(str, "world");
		printf(str);

	}
	system("pause");
	return 0;
}