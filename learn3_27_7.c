#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
//#include <iostream>
//using namespace std;

long long Factorial(size_t N)
{
    return N < 2 ? N : Factorial(N - 1) * N;
}

// N 函数调用次数  ->  O(N)

long long Fibonacci(size_t N)
{
    return N < 2 ? N : Fibonacci(N - 1) + Fibonacci(N - 2);
}

// 2^N 二叉树的构成  -> O(2^N)  

int main() {
    int a[10];
    BinarySearch(a, 5, 10);
    system("pause");
    return 0;
}