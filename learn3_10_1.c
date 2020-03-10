#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main() {
    int a[5] = { 1,2,3,4,5 };
    int* p = (int*)(&a + 1);
    printf("%d", *(p - 1));
    system("pause");
    return 0;
}