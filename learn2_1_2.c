#include <stdio.h>
#include <stdlib.h>

int main(){
	int a[3][3] = { { 3, 5 }, { 8, 9 }, { 12, 35 } }, i, sum = 0; 
	for (i = 0; i < 3; i++)
	{
		sum += a[i][2 - i];
	}
	printf("%d", sum);
	system("pause");
	return 0;
}