#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//#include <iostream>
//using namespace std;

char f(char x)
{
    return x * x + 'a';
}

int main() {
    char a, b = 0;
    for (a = 0; a < 4; a += 1) {
        b = f(a);
        putchar(b);
    }
    system("pause");
    return 0;
}