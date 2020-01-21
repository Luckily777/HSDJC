#include <stdio.h>
#include <stdlib.h>

int Max(x, y)
int x, y;
{ int z;
if (x>y) z = x;
else z = y;
return(z);
}


int main()
{
	int a = 45, b = 27, c = 0;
	c = Max(a, b);
	printf("%d\n", c);
	system("pause");
	return 0;
}