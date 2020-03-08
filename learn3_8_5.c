#include <stdio.h>
#include <stdlib.h>
//编译

#define DEBUG_PRINT printf("file:%s line:%d", __FILE__, __LINE__)
#define For for(;;)
//#define MAX 10000
#define MAX(a,b) a>b


int main() {
	//1. 系统已经定义好的
	printf("file:%s line:%d", __FILE__, __LINE__);
	DEBUG_PRINT;
	

	//2
	//int max;
	//if (condition) {
	//	max = MAX;
	//}
	//else {
	//	max = 0;
	//}

	//3. 最容易考的  ：实现一个MAX宏函数
	int x1 = 1, x2 = 2;
	printf("%d\n",MAX(x1,x2));
	printf("%d\n", MAX(x1|x2, x1&x2));
	//如果想要按照我们的逻辑运算来进行，需要将定义的ab括号括起来
	printf("%d\n", MAX(x1,x2)*5);

	system("pause");
	return 0;
}