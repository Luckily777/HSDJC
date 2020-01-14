#include <stdio.h>
#include <stdlib.h>

int main()
{
	char a[7] = "a0\0a0\0"; 
	int i, j;
	i = sizeof(a); 
	j = strlen(a);

	printf("%d,%d\n", i, j);
	system("pause");
	return 0;
}