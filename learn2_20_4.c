#include <stdio.h>
#include <stdlib.h>
//��ά���鴫��

//�������β�λ���˻���Ϊָ��
void test1(int(*p)[5], int n,int m)//  ����ʹ��
{
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < m; j++)
		{
			p[i][j];//*(*(p+i)+j)
		}
	}
}
//���ߵȼ�
void test2(int p[][5], int n,int m)//
{
}

//void test3(int* p[5], int n)  �ȼ��� int ** p[5]
//{
//	printf("%d", sizeof(arr));
//} ���ǹ���ȥ��

int main(){
	int arr[3][5] = { 0 };
	test1(arr, 3,5);
	printf("%d ", sizeof(arr));//60
	printf("%d ", sizeof(arr+1));//4 ����ָ�� int (*)[5]

	printf("%d ", arr);// ���߲�20  ��ά�������Ԫ���ǵ�һ��
	printf("%d ", arr+1);//
	//arr[2][3]  �ȼ���*(*(arr+2��+3��
	//test2(arr, 10);


	printf("%d\n", sizeof(arr[2]));//20����  int* ��������е������� 
	printf("%d\n", sizeof(arr[2]+1));//4 



	printf("%p\n", arr[2]);//  �������4 ����һ��Ԫ��
	printf("%p\n", arr[2] + 1);// 

	printf("%p\n", &arr[2]);//  �������20 ����һ������
	printf("%p\n", &arr[2] + 1);// 
 	system("pause");
	return 0;
}