#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
//#include <iostream>
//using namespace std;

void BubbleSort(int* a, int n)//2
{
    assert(a);
    for (size_t end = n; end > 0; --end)//1
    {
        int exchange = 0;//1
        for (size_t i = 1; i < end; ++i)//1
        {
            if (a[i - 1] > a[i])
            {
                Swap(&a[i - 1], &a[i]);
                exchange = 1;
            }
        }
        if (exchange == 0)
            break;
    }
}
// 5 -> O(1)  

int main() {
    int a[10];
    BinarySearch(a, 5, 10);
    system("pause");
    return 0;
}