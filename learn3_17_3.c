#include <stdio.h>
#include <stdlib.h>
//#include <iostream>
//using namespace std;

struct S
{
    int n;
    char c[10];
} *p;
int main() {
    struct S a[3] = { {3,"abc"},{5,"def"},{7,"ghi"} };
    p = a;
    printf("%d,", (*p).n);
    printf("%d\n", (++p)->n);
    system("pause");
    return 0;
}