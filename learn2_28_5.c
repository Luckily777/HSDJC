#include <stdio.h>
#include <stdlib.h>
//calloc ��̬����

int main() {
	int* p1 = (int*)malloc(sizeof(int) * 10);
	p1[0] = 0;
	p1[1] = 1;
	int* p2 = (int*)calloc(10, sizeof(4));// ���ռ��ͬʱ��ɸ�ֵ
	
										  
	//��Ҫ�˶���free
	//free(p1);
	//free(p2);

	//����
	int* p3 = realloc(p1, sizeof(int) * 20);
	printf("%p\n", p1);
	printf("%p\n", p3);// ԭ������ ��ַ��ͬ������ֱ���������ݲ����ؿ���

	printf("%d\n", p3[0]);
	printf("%d\n", p3[1]);


	int* p4 = realloc(p1, sizeof(int) * 2000);
	printf("%p\n", p4); // ��������һ��ռ� 

	printf("%d\n", p4[0]);
	printf("%d\n", p4[1]);

	system("pause");
	return 0;
}