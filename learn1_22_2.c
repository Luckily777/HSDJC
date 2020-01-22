#include <stdio.h>
#include <stdlib.h>
//´æÔÚÖØ¸´ÔªËØ
#define numsSize 10

int main()
{
	int nums[numsSize] = { 1, 1, 1, 3, 3, 4, 3, 2, 4, 2 };
	int i, j;
	for (i = 0; i<numsSize; i++)
	{
		if (i == numsSize - 1)
		{
			printf("flase");
		}
		
		else 
		{
			for (j = i + 1; j<numsSize; j++)
				if (nums[i] == nums[j])
				{
					printf("true");
					i = numsSize;
				}
		}
	}
	system("pause");
	return 0;
}