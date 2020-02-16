#include <stdio.h>
#include <stdlib.h>

int main(){
	int m = 12, n = 34;
	printf("%d%d", m++, ++n);
	printf("%d%d\n", n++, +m);
	system("pause");
	return 0;
}