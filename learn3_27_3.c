#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
//#include <iostream>
//using namespace std;

void Func3(int N,int M) {
    int count = 0;
    for (int k = 0; k < M; ++k) {
        ++count;
    }
    for (int k = 0; k < N; ++k) {
        ++count;
    }
    printf("%d\n", count);
}


//   N+M  ->N+M

//整个函数的时间复杂度为O（M+N） 

int main() {
    Func3(10,10);
    system("pause");
    return 0;
}