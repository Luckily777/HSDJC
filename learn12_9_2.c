#include <stdio.h>
#include <stdlib.h>
int main(){
	int arr[4] = { 1, 2, 3, 4 };
	int* p = &arr[0];
	printf("%p\n", arr[1]);//��ӡ��һ���ĵ�ַ

	printf("%d\n", p[1]);//��ӡ����ĵ�һ��ֵ
	printf("%p\n", (*p + 1));//ָ��+1 ���ǵ�ַ0��1
	system("pause");
	return 0;
}
