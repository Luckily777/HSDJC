#include <stdio.h>
#include <stdlib.h>
//����

#define DEBUG_PRINT printf("file:%s line:%d", __FILE__, __LINE__)
#define For for(;;)
//#define MAX 10000
#define MAX(a,b) a>b


int main() {
	//1. ϵͳ�Ѿ�����õ�
	printf("file:%s line:%d", __FILE__, __LINE__);
	DEBUG_PRINT;
	

	//2
	//int max;
	//if (condition) {
	//	max = MAX;
	//}
	//else {
	//	max = 0;
	//}

	//3. �����׿���  ��ʵ��һ��MAX�꺯��
	int x1 = 1, x2 = 2;
	printf("%d\n",MAX(x1,x2));
	printf("%d\n", MAX(x1|x2, x1&x2));
	//�����Ҫ�������ǵ��߼����������У���Ҫ�������ab����������
	printf("%d\n", MAX(x1,x2)*5);

	system("pause");
	return 0;
}