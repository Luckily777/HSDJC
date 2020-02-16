#include <stdio.h>
#include <stdlib.h>

int main(){
	int a, b, c;
	a = b = 1, a++, b + 1, c = a + b--;
	printf("%d %d %d", a, b, c);
	system("pause");
	return 0;
}