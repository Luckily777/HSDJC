//·½·¨1 
int searchInsert(int* nums, int numsSize, int target)
{
	int i;

	if (nums[0]>target) return 0;

	for (i = 0; i < numsSize; i++)
	if (nums[i] == target) return i;

	for (i = 1; i < numsSize; i++)
	if (nums[i - 1] < target && nums[i] > target) return i;

	return numsSize;
}

