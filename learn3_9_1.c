#include <stdio.h>
#include <stdlib.h>
//��������

#define __DEBUG__

int main() {
	int i = 0;
	int arr[10] = { 0 };
	for (i = 0; i < 10; i++) {
		arr[i] = i;
#ifdef __DEBUG__//�������ľͱ��룬û�оͲ�����
		printf("%d\n", arr[i]);
#endif//
	}
	system("pause");
	return 0;
}