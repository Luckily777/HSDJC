#include <stdio.h>
#include <stdlib.h>


int main()
{
	int num = 1234, s = 0;
	while (num != 0) {
		s += num % 10;
		num /= 10;
	}
	printf("%d", s);
	system("pause");
	return 0;
}