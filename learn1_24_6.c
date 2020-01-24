#include <stdio.h>
#include <stdlib.h>

int fun(int x) {
	return (x == 1) ? 1 : (x + fun(x - 1));
}

int main()
{
	printf("%d\n", fun(2));
	system("pause");
	return 0;
}
