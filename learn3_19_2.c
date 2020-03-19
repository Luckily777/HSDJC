#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//#include <iostream>
//using namespace std;

void foo(int* a, int* b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}


int main() {
    int a = 1, b = 2, c = 3;
    foo(&a, &b);
    foo(&b, &c);
    foo(&c, &a);
    printf("%d, %d, %d", a, b, c);
    system("pause");
    return 0;
}