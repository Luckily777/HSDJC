#include <stdio.h>
#include <stdlib.h>


int main() {

	//1. 
	//int* p = (int*)malloc(0x7fffffff);
	//if (p)// �ȼ���if(p!=NULL)
	//{
	//*p = 20;//���p��ֵΪNULL �ͻ�������
	//free(p);
	//}

	//2. Խ������
	// Խ�粻һ������
	int i = 0;
	int *p= (int*)malloc(10*sizeof(int));
	if (NULL == p) {
		exit(EXIT_FAILURE);
	}
	for (i = 0; i <= 10; i++) {
		*(p + i) = i;
	}
	free(p);

	////3 �Ƕ�̬�ռ䲻���ͷ�
	//int a = 10;
	//int* p = &a;
	//free(p);

	//4 Ҫ�ͷű���ȫ���ͷ� �����ͷ�һ��
	/*int* p = (int*)malloc(100);
	free(p + 50);*/

	//5 �����ظ������ʧ��  �Ѵ�Žӽ���2G
	int* p = (int*)malloc(1024*1024);
	if (NULL != p) {
		*p = 20;
		printf("aaaaa\n");
	}
	else {
		printf("bbbbbbb\n");
	}
	system("pause");
	return 0;
}