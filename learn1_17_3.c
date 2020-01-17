#include <stdio.h>
#include <stdlib.h>

int main()
{
	char c[] = "abc";
	int i = 0;
	do;
	while (c[i++] != '\0'); 
	printf("%d", i - 1);
	system("pause");
	return 0;
}