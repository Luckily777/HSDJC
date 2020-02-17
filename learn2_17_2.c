#include <stdio.h>
#include <stdlib.h>
//448.找到所有数组中消失的数字
int main(){
	int nums[] = { 4, 3,  7, 8, 3, 1 };
	int numsSize = sizeof(nums) / 4;
	int returnSize[1024] = { 0 };
	int i = 0, j = 0, k = 0;
	int temp = 0;
	for (; i<numsSize; i++)
	{
		for (j = i + 1; j<numsSize; j++)
		{
			if (nums[i]>nums[j])
			{
				temp = nums[i];
				nums[i] = nums[j];
				nums[j] = temp;
			}
		}
		if ((i > 0)&&(nums[i-1])!=nums[i])
		{
			while ((nums[i - 1] + 1) != nums[i])
			{
				printf("%d ", returnSize[k++] = nums[i - 1] + 1);
				nums[i - 1]+=1;
			}
		}
	}
	system("pause");
	return 0;
}