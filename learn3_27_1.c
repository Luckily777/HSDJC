#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
//#include <iostream>
//using namespace std;

void Func1(int N) {
    int count = 0;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            ++count;
        }
    }
    for (int k = 0; k < N * 2; ++k) {
        ++count;
    }
    int M = 10;
    while (M--) {
        ++count;
    }
    printf("%d\n", count);
}

//   N^2 + 2*N + 10 

//整个函数的时间复杂度为O（N^2） 

int main() {
    Func1(10);
    system("pause");
    return 0;
}