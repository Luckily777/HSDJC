#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main() {
    char para[100];
    void* p = malloc(100);
    printf("%d, %d\n", sizeof(para), sizeof(p));
    system("pause");
    return 0;
}