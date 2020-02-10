#include <stdio.h>
#include <stdlib.h>

int func(int i, int j)
{
	if(i <= 0 || j <= 0)
		return 1;
	return 2 * func(i - 3, j / 2);
}

int main(){
	printf("%d,", func(15, 20));
	system("pause");
	return 0;
}