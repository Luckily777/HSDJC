#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)//除10取余，和9比较，计算个位；
		    count+=1;
		if (i / 10 == 9)//除10取整，和9比较，计算十位；
			count+=1;
	}
	printf("%d", count);
	system("pause");
	return 0;
}