#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
//#include <iostream>
//using namespace std;

const char* strchr(const char* str, int character);

//   N ->1

//整个函数的时间复杂度为O（N）


void BubbleSort(int* a, int n)
{
    assert(a);
    for (size_t end = n; end > 0; --end)
    {
        int exchange = 0;
        for (size_t i = 1; i < end; ++i)
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

// 2^N  ->  O(2^N)

int main() {
    Func4(10);
    int a[10];
    BubbleSort(a, 10);
    system("pause");
    return 0;
}