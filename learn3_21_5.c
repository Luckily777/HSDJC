#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//#include <iostream>
//using namespace std;

int f(int x)
{
    return x * x + 1;
}

int main()
{
    int a, b = 0;
    for (a = 0; a < 3; a += 1)
    {
        b += f(a);
        putchar('A' + b);
    }

    system("pause");
    return 0;
}