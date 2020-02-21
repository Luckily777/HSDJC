#include <stdio.h>
#include <stdlib.h>
//

int main(){
	char *a[] = { "work", "at", "alibaba" };
	char **pa = a;
	pa++; //+4 跨越的是一个指针
	// int* +1 4
	// char* +1 1
	// char ** +1 4
	printf("%s\n", *pa);//at
	system("pause");
	return 0;
}