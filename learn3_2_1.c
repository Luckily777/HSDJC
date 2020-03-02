#include <stdio.h>
#include <stdlib.h>
//二维指针的练习

int main()
{
    int a[3][4] = { 0 };
    printf("%d\n", sizeof(a));//48
    printf("%d\n", sizeof(a[0][0]));//4
    printf("%d\n", sizeof(a[0]));//16
    printf("%d\n", sizeof(a[0]+1));// 4  隐式指针
    printf("%d\n", sizeof(*(a[0]+1)));//4
    printf("%d\n", sizeof(&a[0] + 1));//4
    printf("%d\n", sizeof(*(&a[0]+1)));//16
    printf("%d\n", sizeof(*a));//16
    printf("%d\n", sizeof(a[100]));//16
    printf("%d\n", a[100]);// 越界

    system("pause");
    return 0;
}