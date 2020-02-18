#include <stdio.h>
#include <stdlib.h>
//
int main(){
	int p[8] = { 11, 12, 13, 14, 15, 16, 17, 18 }, i = 0, j = 0;
	while (i++<7)  if (p[i] % 2)   j += p[i];

	printf("%d\n", j);
	system("pause");
	return 0;
}