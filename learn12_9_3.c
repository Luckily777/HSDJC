#include <stdio.h>
#include <stdlib.h>
int main(){
	int arr[4] = { 1, 2, 3, 4 };
	int* p1 = &arr[0];
	int* p2 = &arr[2];
	int ret = p2 - p1;
	printf("%p\n%p\n", p1,p2);//��ӡ����ָ��ĵ�ַ

	printf("ret=%d\n", ret);//��ӡ����ָ�����֮��

	system("pause");
	return 0;
}