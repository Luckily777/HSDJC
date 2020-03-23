#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//#include <iostream>
//using namespace std;
//力扣 两数之和

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    for (int i = 0; i < numsSize; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            if ((nums[i] + nums[j]) == target)
            {
                returnSize[0] = i;
                returnSize[1] = j;
                return returnSize;
            }
        }
    }
    return 0;
}


int main()
{
    int nums[] = { 2,7,12,45 };
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int target = 9;
    int returnSize[2] = { 0 };
    twoSum(nums, numsSize, target, returnSize);
    printf("%d %d", returnSize[0], returnSize[1]);
    system("pause");
    return 0;
}




//int* twoSum(int* nums, int numsSize, int target, int* returnSize){
int* a = (int*)malloc(sizeof(int) * 2);
for (int i = 0; i < numsSize - 1; i++)
{
    for (int j = i + 1; j < numsSize; j++)
    {
        if ((nums[i] + nums[j]) == target)
        {
            a[0] = i;
            a[1] = j;
            *returnSize = 2;
            return a;
        }
    }
}
return 0;
}