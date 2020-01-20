#include <stdio.h>
#include <stdlib.h>


int main()
{
	int  i = 1, j = 2, k = 3;

	if (i++ == 1 && (++j == 3 || k++ == 3))//前面的成立则不往后继续进行

		printf("%d  %d  %d\n", i, j, k);
	system("pause");
	return 0;
}