#include <stdio.h>
#include <stdlib.h>

int main(){
	int a = 12;
	int b;
	b = ~a;
	printf("将a取反得到b为：%d\n",b);
	a = ~a;
	printf("将a取反得到：%d\n",a);
	system("pause");
	return 0;
}