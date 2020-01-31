#include <stdio.h>
#include <stdlib.h>

#define numsSize 5

int main()
{
	int nums[] = { 1, 2, 3, 4, 6 };
	int uncounter = -1;
	int i;
	for (int counter = 1; counter<numsSize; counter++)
	{
		int addnuml = 0;
		int addnumr = 0;
		if (counter == (numsSize - 1))
		{
			printf("%d\n", uncounter);
			i = counter;
		}
		for (i = 0; i < counter; i++)
		{
			addnuml += nums[i];
		}
		for (int j = counter + 1; j<numsSize; j++)
		{
			addnumr += nums[j];
		}
		if (addnuml == addnumr)
		{
			printf("%d\n", counter);
			counter = numsSize;
		}
	}
	system("pause");
	return 0;
}