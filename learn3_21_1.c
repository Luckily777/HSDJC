#include <stdio.h>
#include <stdlib.h>

void GetMove(char* p) {
	p = (char*)malloc(sizeof(int));
}



int main()
{
	//int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
	//int* p = arr; //指针存放数组首元素的地址
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//for (int i = 0; i < sz; i++)
	//{
	//	printf("&arr[%d] = %p <====> p+%d = %p\n", i, &arr[i], i, p + i);
	//}

	//2.
	//char* str = NULL;
	//GetMove(str);
	// 传的是值，不是地址，因此不能够进行 并且没有进行判空 且没有释放

	//3. 
	int* p = (int*)malloc(sizeof(int));
	free(p);
	free(p);
	

	//4.
	int* p = (int*)malloc(sizeof(int));
	p++;
	free(p);//未定义行为
	system("pause");
	return 0;
}