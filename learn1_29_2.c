#include <stdio.h>
#include <stdlib.h>

char *a[] = { "BEIJING", "SHENZHEN", "SHANGHAI", "GUANGZHOU" };
char **pa[] = { a + 3, a + 2, a + 1, a };
char ***ppa = pa;

int main()
{
	printf("%s, ", **++ppa);
	printf("%s, ", *--*++ppa + 3);
	printf("%s, ", *ppa[-2] + 3);
	printf("%s", ppa[-1][-1] + 1);
	system("pause");
	return 0;
}