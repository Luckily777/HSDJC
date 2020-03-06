#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//

int main() {
	int i = 1;
	int j = i++;
	if ((i++ > ++j) && (++i == j)) i += j;
	printf("%d\n", i);
	system("pause");
	return 0;
}
