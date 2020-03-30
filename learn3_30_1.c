#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
//力扣 删除相同的元素

int removeElement(int* nums, int numsSize, int val) {
	int* newA = (int*)malloc(sizeof(numsSize * sizeof(int)));
	int idx = 0;
	for (int i = 0; i < numsSize; ++i)
	{
		if (nums[i] != val)
			newA[idx++] = nums[i];
	}
	memcpy(nums, newA, sizeof(int) * idx);
	free(newA);
	return idx;
}



int removeElement(int* nums, int numsSize, int val) {
	//int* newA = (int*) malloc(numsSize * sizeof(int));
	int idx = 0;
	for (int i = 0; i < numsSize; ++i)
	{
		if (nums[i] != val)
			nums[idx++] = nums[i];
	}
	//memcpy(nums, newA, sizeof(int) * idx);
	//free(newA);
	return idx;
}


int main() {

	system("pause");
	return 0;
}