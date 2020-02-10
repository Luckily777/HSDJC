#include <stdio.h>
#include <stdlib.h>
//在排序数组中查找元素的第一个和最后一个位置
int main(){
	int nums[] = { 5, 7, 7, 8, 8, 10 };
	int target = 6;
	int numsSize = (sizeof(nums)/4);
	int *returnSize;
	int num[2] = { -1, 1 };
	returnSize = num;
	if (nums[0]>target)
	{
		printf("%d,%d", returnSize[0], returnSize[1]);
	}
	else
	{
		for (int i = 0; i<numsSize; i++)
		{
			if (nums[i] == target)
			{
				if (num[0] == -1)
				{
					num[0] = i;
				}
				else{
					num[1] = i;
				}
			}
		}
		printf("%d,%d", returnSize[0], returnSize[1]);
	}
	system("pause");
	return 0;
}