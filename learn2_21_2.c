#include <stdio.h>
#include <stdlib.h>
//

int main(){
	int a[3][2] = { (0,1), (2,3), (4,5) };//���ŷ��� ֻ����1 3 5
	// int a[3][2]={{0,1},{2,3},{4,5}}; ���ֲ�ͬ��
	int *p;
	p = a[0];// ��һ�е��������
	printf("%d\n", p[0]);//1
	system("pause");
	return 0;
}