#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
//#include <iostream>
//using namespace std;

int BinarySearch(int* a, int n, int x)
{
    assert(a);
    int begin = 0;
    int end = n - 1;
    while (begin <= end)
    {
        int mid = begin + ((end - begin) >> 1);
        if (a[mid] < x)
            begin = mid + 1;
        else if (a[mid] > x)
            end = mid;
        else
            return mid;
    }
    return -1;
}

// 二分法(进行多少次2的次方等于总长N)  ->  O(log2N)

int main() {
    int a[10];
    BinarySearch(a, 5, 10);
    system("pause");
    return 0;
}