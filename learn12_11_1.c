#include <stdio.h>
#include <stdlib.h>

int main(){
	int arr[] = { 1, 2, 3, 4 };
	printf("%d\n", sizeof(arr));// ��������Ĵ�С
	printf("%d\n", sizeof(arr+0));//��ʽת��Ϊָ�� ����ʾ��һ��Ԫ�صĴ�С
	printf("%d\n", sizeof(*arr));// ����ָ�룬ȫ��Ϊ4
	printf("%d\n", sizeof(arr+1));// ͬ2һ��
	printf("%d\n", sizeof(&arr));//ȡarr�ĵ�ַ����ҲΪ����ָ��
	printf("%d\n", sizeof(*&arr));//16  ����ָ��Ľ�����
	printf("%d\n", sizeof(&*arr));//4  ���int��ȡ&
	printf("%d\n", sizeof(&arr+1));//4����ָ��+1
	printf("%d\n", sizeof(&arr[0]));//4 int*
	system("pause");
	return 0;
}