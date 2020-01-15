//·½·¨2
int searchInsert(int* nums, int numsSize, int target)
{
	int left = 0;
	int right = numsSize - 1;
	int mid;
	while ((right>left) || (left == right))
	{
		mid = (left + right) / 2;
		if (target<nums[left])
		{
			return left;
		}
		if (target>nums[right])
		{
			return right + 1;
		}
		if (target>nums[mid])
		{
			left = mid + 1;
			if (target<nums[mid + 1])
			{
				return mid + 1;
			}
		}
		else if (target < nums[mid])
		{
			right = mid - 1;
			if (target>nums[mid - 1])
			{
				return mid;
			}
		}
		else
		{
			return mid;
		}
	}
	return 0;
}