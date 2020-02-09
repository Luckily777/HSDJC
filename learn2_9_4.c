#include <stdio.h>
#include <stdlib.h>

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	if (a > b) a = b; b = a;
	else a++; b++;//有语法错误，不能够这样书写
	printf("%d,%d", a, b);
	system("pause");


	return 0;
}