#include <stdio.h>
#include <stdlib.h>

# define  ADD(x)   x+x
int main(){
	int  m = 1, n = 2, k = 3, sum;
	sum = ADD(m + n) * k;
	printf(" sum = %d \n ", sum);
	system("pause");
	return 0;
}