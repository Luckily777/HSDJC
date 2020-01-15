int removeElement(int* nums, int numsSize, int val){
	int i;
	int j = 0, k = 0;
	for (i = 0; i<numsSize; i++)
	{
		if (nums[i] != val)
		{
			nums[j++] = nums[i];
		}
		else
			k += 1;
	}
	numsSize -= k;
	return numsSize;
}