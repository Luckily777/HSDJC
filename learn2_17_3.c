#include <stdio.h>
#include <stdlib.h>

//������ 17.10. ��ҪԪ��(����ʱ������)


int main(){
	int nums[] = { 3, 2, 3 };
	int numsSize = sizeof(nums) / 4;
	int Mainnum = (numsSize / 2);
	for (int i = 0; i<numsSize; i++)
	{
		Mainnum = (numsSize / 2);
		for (int j = i + 1; j<numsSize; j++)
		{
			if (nums[i] == nums[j])
			{
				Mainnum--;
			}
		}
		if (Mainnum <= 0)
		{
			printf("%d",nums[i]);
			i = numsSize;
		}
	}
	if (Mainnum>0)
	{
		printf("-1");
	}
	system("pause");
	return 0;
}