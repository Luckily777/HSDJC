#include <stdio.h>
#include <stdlib.h>
//���� ָ�� �洢 ��С��

int main(){
	int a[4] = { 1, 2, 3, 4 };
	int *ptr1 = (int *)(&a + 1);
	int *ptr2 = (int *)((int)a + 1);// 
	printf("%x,%x\n", ptr1[-1],*ptr2);//4 2000000
	system("pause");
	return 0;
}