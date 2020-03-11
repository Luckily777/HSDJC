#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
    int x;
    int y = 10;
    x = y++;
    printf("%d,%d", x,y);
    system("pause");
    return 0;
}