#include <stdio.h>
#include <stdlib.h>

//������

#define E 1e-4
int main() {
	// �����ʾ��
	/*float i = 19.0;
	float j = i / 7.0;
	if (j * 7.0 == i)
	{
		printf("���");
	}
	else{
		printf("�����");
	}*/



	float i = 19.0;
	float j = i / 7.0;
	if (j * 7.0 - i<E && j * 7.0 - i>-E)
	{
		printf("���");
	}
	else {
		printf("�����");
	}
	system("pause");
	return 0;
}