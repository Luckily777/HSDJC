#include <stdio.h>
#include <stdlib.h>
// ���Ϲ����� ˭�����˭�Ŀռ�Ϊ׼

union Un {
	char c;
	int i;
};
union Um {
	char c[5];
	int i;
};



int main() {

	//��С�˻�
	union Un u;
	u.i = 1;
	if (u.c == 1)
	{
		printf("С�˻�");
	}
	else
	{
		printf("��˻�");
	}

	//ȡ�������͵Ĵ�С
	printf("%d\n", sizeof(union Un));

	// ����ȡ�׵�ַ
	printf("%x\n", &(u.c));
	printf("%x\n", &(u.i));

	// �ڴ�ķ��� 55 33 22 11
	u.i = 0x11223344;
	u.c = 0x55;
	printf("%x\n", u.i);

	// ʵ�ʴ�С
	printf("%d\n", sizeof(union Um));


	system("pause");
	return 0;
}