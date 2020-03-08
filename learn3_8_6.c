#include <stdio.h>
#include <stdlib.h>
//宏替换

#define PRINT(FORMAT,VALUE) \
		printf("the value of"#VALUE"is "FORMAT"\n",VALUE);

#define ADD_TO_SUM(num,value) \
		sum##num += (value*3.14+10.1456);

#define MAX(a,b) ((a)>(b)?(a):(b))

void fun(int x, int y) {
	printf("%d,%d", x, y);
}

int main() {
	// 1. 自动连接 
	//char* p = "hello""bit\n";
	//printf("hello", "bit\n");//只打印hello
	//printf("%s", p);

	//2. 续接
	/*int i = 0;
	PRINT("%d", i + 3);
	int j = 1;
	PRINT("%d", j + 3);*/

	//3. 
	/*double sum1 = 1, sum2 = 2,sum3 = 3;
	ADD_TO_SUM(1, 10);
	ADD_TO_SUM(2, 10);
	ADD_TO_SUM(3, 10);*/

	//4. 下面输出是什么？
	//int x = 5, y = 8;
	//int z = MAX(x++, y++);
	//printf("a=%d,y=%d,z=%d\n", x, y, z);


	//5. 练习
	int i = 1;
	fun(i++, i++);
	system("pause");
	return 0;
}