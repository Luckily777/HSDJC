#include <stdio.h>
#include <stdlib.h>
//
int main(){
	int a[5] = { 1, 2, 3, 4, 5 };
	int *ptr = (int*)(&a + 1);//ǿת��Ϊint * ��ʾָ��5������Ǹ�Ԫ��
	printf("%d %d\n", *(a + 1), *(ptr - 1));// 2 5
	system("pause");
	return 0;
}