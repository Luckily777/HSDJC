#include <stdio.h>
#include <stdlib.h>

void GetMove(char* p) {
	p = (char*)malloc(sizeof(int));
}



int main()
{
	//int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
	//int* p = arr; //ָ����������Ԫ�صĵ�ַ
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//for (int i = 0; i < sz; i++)
	//{
	//	printf("&arr[%d] = %p <====> p+%d = %p\n", i, &arr[i], i, p + i);
	//}

	//2.
	//char* str = NULL;
	//GetMove(str);
	// ������ֵ�����ǵ�ַ����˲��ܹ����� ����û�н����п� ��û���ͷ�

	//3. 
	int* p = (int*)malloc(sizeof(int));
	free(p);
	free(p);
	

	//4.
	int* p = (int*)malloc(sizeof(int));
	p++;
	free(p);//δ������Ϊ
	system("pause");
	return 0;
}