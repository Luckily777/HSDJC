#include <stdio.h>
#include <stdlib.h>


int main()
{
	char ch = 'A';
	while (ch<'D')
	{
		printf("%d", ch - 'A');
		ch++;
	}
	printf("\n");
	system("pause");
	return 0;
}