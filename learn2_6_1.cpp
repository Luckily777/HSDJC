#include <stdio.h>
#include <stdlib.h>

#define ADD(x)  x*x

int main(){
	int a = 4, b = 6, c = 7, d = ADD(a + b)*c;
	printf("d=%d", d);
	system("pause");
	return 0;
}