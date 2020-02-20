#include <stdio.h>
#include <stdlib.h>
//二维数组传参

//数组在形参位置退化成为指针
void test1(int(*p)[5], int n,int m)//  建议使用
{
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < m; j++)
		{
			p[i][j];//*(*(p+i)+j)
		}
	}
}
//两者等价
void test2(int p[][5], int n,int m)//
{
}

//void test3(int* p[5], int n)  等价于 int ** p[5]
//{
//	printf("%d", sizeof(arr));
//} 都是过不去的

int main(){
	int arr[3][5] = { 0 };
	test1(arr, 3,5);
	printf("%d ", sizeof(arr));//60
	printf("%d ", sizeof(arr+1));//4 数组指针 int (*)[5]

	printf("%d ", arr);// 两者差20  二维数组的首元素是第一行
	printf("%d ", arr+1);//
	//arr[2][3]  等价于*(*(arr+2）+3）
	//test2(arr, 10);


	printf("%d\n", sizeof(arr[2]));//20类型  int* 代表第三行的数组名 
	printf("%d\n", sizeof(arr[2]+1));//4 



	printf("%p\n", arr[2]);//  两者相差4 加了一个元素
	printf("%p\n", arr[2] + 1);// 

	printf("%p\n", &arr[2]);//  两者相差20 加了一个数组
	printf("%p\n", &arr[2] + 1);// 
 	system("pause");
	return 0;
}