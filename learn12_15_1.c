#include <stdio.h>
#include <stdlib.h>

#define Z int*
typedef int* ZX;

int main(){
	ZX i,j;//整体的替换
	Z a, b;//Z是进行查找替换的，只能够替换a前面的，而不能够改变b的类型
	return 0;
}