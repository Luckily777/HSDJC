#include <stdio.h>
#include <stdlib.h>

int main(){
	int a[] = { 2, 4, 6, 8, 10 }, *p, **k;
	p = a;
	k = &p;
	printf("%d", *(p++));
	printf("%d\n", **k);
	system("pause");
	return 0;

}