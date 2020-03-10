#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int a = 5, b = 4, c = 6, d;
    printf("%d\n", d = a > b ? (a > c ? a : c) : (b));
    system("pause");
    return 0;
}