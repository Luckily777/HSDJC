#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
//���� ���������ͬԪ��ɾ��

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
            //�ҵ���һ����ͬ��Ԫ�ص�λ��
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