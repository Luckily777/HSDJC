#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
//#include <iostream>
//using namespace std;

long long* Fibonacci(size_t n)
{
    if (n == 0)
        return NULL;
    long long* fibArray =
        (long long*)malloc((n + 1) * sizeof(long long));//n
    fibArray[0] = 0;
    fibArray[1] = 1; for (int i = 2; i <= n; ++i)
    {
        fibArray[i] = fibArray[i - 1] + fibArray[i - 2];
    }
    return fibArray;
}
// n -> O(n)  


long long Factorial(size_t N)
{
    return N < 2 ? N : Factorial(N - 1) * N;
}

// N次调用，创建n个变量  ->O(n)
int main() {
   
    system("pause");
    return 0;
}