#include <stdio.h>
#include <stdlib.h>
//两数之和
int main(){
	int nums[] = { 2, 9, 11, 7 };
	int numsSize = 4; 
	int target = 9;
	int returnSize[2] = { 0 };
		for (int i = 0; i<numsSize; i++)
		{
			for (int j = i + 1; j<numsSize; j++)
			{
				if ((nums[i] + nums[j]) == target)
				{
					returnSize[0] = i;
					returnSize[1] = j;
					i = numsSize;
				}
			}
		}
		printf("%d %d", returnSize[0], returnSize[1]);
		system("pause");
		return 0;
	}