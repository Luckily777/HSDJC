#include <stdio.h>
#include <stdlib.h>

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	if (a > b) a = b; b = a;
	else a++; b++;//���﷨���󣬲��ܹ�������д
	printf("%d,%d", a, b);
	system("pause");


	return 0;
}