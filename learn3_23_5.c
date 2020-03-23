#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//#include <iostream>
//using namespace std;
//力扣  错误的分式化简

int* fraction(int* cont, int contSize, int* returnSize) {
    double* a = (double*)malloc(sizeof(double) * 10);
    int* b = (int*)malloc(sizeof(int) * 2);
    if (contSize == 1) {
        b[0] = cont[0];
        b[1] = 1;
        *returnSize = 2;
        return b;
    }
    for (int i = 0; i < contSize; i++) {
        a[i] = cont[i];
    }
    for (int i = contSize - 2; i >= 0; i--) {
        a[i] = a[i] + (1 / a[i + 1]);
    }
    if (a[0] - (double)((int)(a[0])) < 0.000001) {
        b[0] = (int)a[0];
        b[1] = 1;
        *returnSize = 2;
        return b;
    }
    else {
        int c = (int)a[0];
        b[0] = c * (contSize)+1;
        b[1] = contSize;
        *returnSize = 2;
        return b;
    }
    return 0;
}