#include <stdio.h>
#include <stdlib.h>


int main()
{
	int  i = 1, j = 2, k = 3;

	if (i++ == 1 && (++j == 3 || k++ == 3))//ǰ��ĳ����������������

		printf("%d  %d  %d\n", i, j, k);
	system("pause");
	return 0;
}