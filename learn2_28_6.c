#include <stdio.h>
#include <stdlib.h>


int main() {

	//1. 
	//int* p = (int*)malloc(0x7fffffff);
	//if (p)// 等价于if(p!=NULL)
	//{
	//*p = 20;//如果p的值为NULL 就会有问题
	//free(p);
	//}

	//2. 越界问题
	// 越界不一定报错
	int i = 0;
	int *p= (int*)malloc(10*sizeof(int));
	if (NULL == p) {
		exit(EXIT_FAILURE);
	}
	for (i = 0; i <= 10; i++) {
		*(p + i) = i;
	}
	free(p);

	////3 非动态空间不能释放
	//int a = 10;
	//int* p = &a;
	//free(p);

	//4 要释放必须全部释放 不能释放一半
	/*int* p = (int*)malloc(100);
	free(p + 50);*/

	//5 不断重复申请会失败  堆大概接近于2G
	int* p = (int*)malloc(1024*1024);
	if (NULL != p) {
		*p = 20;
		printf("aaaaa\n");
	}
	else {
		printf("bbbbbbb\n");
	}
	system("pause");
	return 0;
}