#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//qosrt函数实现char型排序
//#include <iostream>
//using namespace std;

int double_cmp(const void* a, const void* b)
{
    return *(double*)a > *(double*)b?1:-1;
}

int main() {
    double str[] = { 1.4, 3.9, 5.4, 5.2, 9, 2, 4, 6, 8, 0 };
    qsort(str, sizeof(str) / sizeof(str[0]), sizeof(double), double_cmp);
    for (int i = 0; i < sizeof(str) / sizeof(str[0]); i++)
    {
        printf("%f ", str[i]);
    }
    system("pause");
    return 0;
}