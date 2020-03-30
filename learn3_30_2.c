#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
//力扣 将多余的相同元素删除

int removeDuplicates(int* nums, int numsSize) {
    int idx = 0;
    int i = 0;
    int j = 1;
    while (j < numsSize)
    {
        nums[idx++] = nums[i];
        if (nums[i] != nums[j])
        {
            ++i;
            ++j;
        }
        else {
            //找到下一个不同的元素的位置
            while (j < numsSize && nums[i] == nums[j])
                ++j;
            i = j;
            ++j;
        }
    }
    if (i < numsSize)
        nums[idx++] = nums[i];
    return idx;
}
int main() {

	system("pause");
	return 0;
}