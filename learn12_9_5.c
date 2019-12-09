#include <stdio.h>
#include <stdlib.h>

typedef int* IntPer;

int main(){
	int num = 10;
	IntPer p = &num;
	IntPer* pp = &p;
	printf("%p\n", **pp);
	system("pause");
	return 0;
}