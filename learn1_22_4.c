#include <stdio.h>
#include <stdlib.h>

char *c[] = { "HELLO", "NEW", "WORLD", "SAYHI" };
char **cp[] = { c + 3, c + 2, c + 1, c };
char ***cpp = cp;

int main()
{
	printf("%s", **++cpp);
	printf("%s", *--*++cpp+3);
	printf("%s", *cpp[-2]+3);
	printf("%s", cpp[-1][-1]+1);
	system("pause");
	return 0;
}