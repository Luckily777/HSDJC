void rotate(int* nums, int numsSize, int k){
	int temp = 0;
	int s = numsSize - 1;
	for (int i = 0; i < k; i++)
	{
		for (int j = s; j>0; j--)
		{
			temp = nums[j];
			nums[j] = nums[j - 1];
			nums[j - 1] = temp;
		}
	}
}