#include <stdio.h>
#include <stdlib.h>
//��άָ�����ϰ

int main()
{
    int a[3][4] = { 0 };
    printf("%d\n", sizeof(a));//48
    printf("%d\n", sizeof(a[0][0]));//4
    printf("%d\n", sizeof(a[0]));//16
    printf("%d\n", sizeof(a[0]+1));// 4  ��ʽָ��
    printf("%d\n", sizeof(*(a[0]+1)));//4
    printf("%d\n", sizeof(&a[0] + 1));//4
    printf("%d\n", sizeof(*(&a[0]+1)));//16
    printf("%d\n", sizeof(*a));//16
    printf("%d\n", sizeof(a[100]));//16
    printf("%d\n", a[100]);// Խ��

    system("pause");
    return 0;
}