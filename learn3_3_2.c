#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void func(int n)
{
    static int num = 1;
    num += n;
    printf("%d", num);
}

int main() {
    func(3);
    func(4);
    printf("\n");
    system("pause");
    return 0;
}