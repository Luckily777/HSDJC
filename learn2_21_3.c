#include <stdio.h>
#include <stdlib.h>
//

int main(){
	int a[5][5]; 
	int (*p)[4];
	p=a;// �൱������һ��ǿת p= ��int (*p)[4]��a�� a������Ϊint��*��[5]
	printf("%p,%d\n", &p[4][2]-&a[4][2],&p[4][2]-&a[4][2]);//FFFFFFC  -4
	system("pause");

	//  int * ��� ��ȥ���ǰ����������
	return 0;
}