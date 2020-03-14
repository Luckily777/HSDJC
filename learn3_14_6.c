#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//#include <iostream>
//using namespace std;


int main() {
    int aa[2][5] = { 10,9,8,7,6,5,4,3,2,1 };
    int* ptr1 = (int*)(&aa + 1);
    int* ptr2 = (int*)(*(aa + 1));
    printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
    system("pause");
    return 0;
}