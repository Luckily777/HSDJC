#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//#include <iostream>
//using namespace std;

enum MyEnum
{
    MALE,
    FEMALE,
    NOKNOWN,
};


int main() {
    int num = 1;
    enum MyEnum s = num;//而枚举定义的都是变量
    //int arr[s] = { 0 };
    int arr2[FEMALE] = { 0 };// 枚举里所枚举出来的都是常量
    system("pause");
    return 0;
}