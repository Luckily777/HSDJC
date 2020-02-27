#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
//¡∑œ∞Ã‚

void f(char* x)
{
    x++;
    *x = 'a';
}

int main() {
    char str[sizeof("hello")];
    strcpy(str, "hello");
    f(str);
    cout << str;
    system("pause");
    return 0;

}