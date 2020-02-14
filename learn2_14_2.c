#include <stdio.h>
#include <stdlib.h>


//最短无序数组
int main(){
	int nums[] = {1, 3, 2, 2, 2};
	int numsSize = (sizeof(nums)) / 4;	
	int left = 0;
	int right = numsSize - 1;
	while (left < right&&nums[left] <= nums[left + 1])
	{
		left++;
	}
	while (left < right&&nums[right] >= nums[right - 1])
	{
		right--;
	}
	if (left == right)
	{
		printf("0");
	}
	int min = nums[left];
	int max = nums[right];
	int i = left;
	int j = right;
	for (; i <= j; i++)
	{
		if (nums[i] < min)
		{
			min = nums[i];
		}
		if (nums[i]>max)
		{
			max = nums[i];
		}
	}
	left = 0;
	right = numsSize - 1;
	while (nums[left] <= min)
	{
		left++;
	}
	while (nums[right] >= max)
	{
		right--;
	}
	system("pause");
	return 0;
}

