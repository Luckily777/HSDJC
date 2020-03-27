#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
//#include <iostream>
//using namespace std;

void Func2(int N) {
    int count = 0;
    for (int k = 0; k < 2 * N; ++k) {
        ++count;
    }
    int M = 10;
    while (M--) {
        ++count;
    }
    printf("%d\n", count);
}


//   2*N +10  ->2*N

//整个函数的时间复杂度为O（2*N） 

int main() {
    Func2(10);
    system("pause");
    return 0;
}