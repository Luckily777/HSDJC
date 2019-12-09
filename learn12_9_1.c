#include <stdio.h>
#include <stdlib.h>
int main(){
	double* p = (double*)0x100;//地址
	printf("%p\n", p + 1);//指针+1 则是地址加1
	system("pause");
	return 0;
}
