#include <stdio.h>
#include <stdlib.h>

//&������or������ 


int main(){
	int arr[10] = { 0 };
	printf("%p\n", arr);//��Ԫ�صĵ�ַ
	printf("%p\n", &arr);//����ĵ�ַ
	printf("%p\n", arr+1);//��Ԫ�صĵ�ַ+1
	printf("%p\n", &arr+1);//����ָ��ĵ�ַ+1

	int *p1 = arr;
	int(*p2)[10] = &arr;//����ָ��תΪ����ָ��
	system("pause");
	return 0;
}