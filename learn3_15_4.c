#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//qosrt函数实现char型排序
//#include <iostream>
//using namespace std;

int char_cmp(const void* str1, const void* str2)
{
    return *(char*)str1 - *(char*)str2;
}

int main() {
    char str[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
    qsort(str, sizeof(str) / sizeof(str[0]), sizeof(char), char_cmp);
    for (int i = 0; i < sizeof(str) / sizeof(str[0]); i++)
    {
        printf("%d ", str[i]);
    }
    system("pause");
    return 0;
}