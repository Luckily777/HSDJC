#include <stdio.h>
#include <stdlib.h>

int main(){
	int arr[4] = { 1, 2, 3, 4 };
	int(*p)[4] = &arr;//����ָ��
	printf("%p\n", &arr[0]);//����ָ����׵�ַ
	printf("%p\n", arr+1);//����ָ�������һ
	printf("%p\n", &arr+1);//����ָ�������һ
	system("pause");
	return 0;
}

