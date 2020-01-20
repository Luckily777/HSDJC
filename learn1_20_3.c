#include <stdio.h>
#include <stdlib.h>

#define F(X,Y)   (X)--, (Y)++, (X)*(Y);
int main()
{
	int i, a = 3, b = 4;
	for (i = 0; i<5; i++)
		F(a, b);
	printf("%d,%d", a, b);
	system("pause");
	return 0;
}
