#include <stdio.h>
#include <stdlib.h>

int main(){
	int num = 10;
	int* p = &num;//解引用运算/间接访问运算符
	//根据地址找到对应的值
	*p = 5;
	printf("%d\n", *p);
	system("pause");
	return 0;

}