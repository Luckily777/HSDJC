#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//#include <iostream>
//using namespace std;

int f(int n)
{
    if (n == 1) return 1;
    else return f(n - 1) + 1;
}

int main() {
    int i, j = 0;
    for (i = 1; i < 3; i++)
    {
        j += f(i);
    }
    printf("%d\n", j);
    system("pause");
    return 0;
}