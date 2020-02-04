#include <stdio.h>
#include <stdlib.h>

//第三大的数
int main(){
	int nums[] = { 2, 2, 3, 1 };
	int numsSize = 4;
	if (numsSize<3)
	{
		if (numsSize == 1)
		{
			printf("%d", nums[0]);
		}
		else
		{
			int c = (nums[0]>nums[1] ? nums[0] : nums[1]);
			printf("%d", c);
		}
	}
	else
	{
		int temp = 0;
		for (int i = 0; i<3; i++)
		{
			for (int j = i; j<numsSize; j++)
			{
				if (nums[i]<=nums[j])
				{
					temp = nums[i];
					nums[i] = nums[j];
					nums[j] = temp;
				}
			}
		}
	}
	if (nums[1] == nums[2])
	{
		printf("%d", nums[3]);
	}
	else
		printf("%d", nums[2]);
system("pause");
return 0;

}