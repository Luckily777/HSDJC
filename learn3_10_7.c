#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int a = 5, b = 3, t;
    int* ra = a;
    int* rb = b;
    t = ra; ra = rb; rb = t;// ����֮��ֱ��ֵҲ�����˽���
    printf("a=%d,b=%d", a, b);
    system("pause");
    return 0;
}