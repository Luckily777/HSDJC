#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//qsort函数实现int型排序
//qosrt函数的使用者得实现一个比较函数 
//#include <iostream>
//using namespace std;

int int_cmp(const void* a, const void* b)
{
    return (*(int*)a - *(int*)b);
}

int main() {
    int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
    qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), int_cmp);
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        printf("%d ", arr[i]);
    }
    system("pause");
    return 0;
}