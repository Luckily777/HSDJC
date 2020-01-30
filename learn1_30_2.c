#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *p = "abcdefgh", *r;
	long *q;
	q = (long*)p;
	q++;
	r = (char*)q;
	printf("%s\n", r);
	system("pause");
	return 0;
}