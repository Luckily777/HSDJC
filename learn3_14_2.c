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
    enum MyEnum s = num;//��ö�ٶ���Ķ��Ǳ���
    //int arr[s] = { 0 };
    int arr2[FEMALE] = { 0 };// ö������ö�ٳ����Ķ��ǳ���
    system("pause");
    return 0;
}