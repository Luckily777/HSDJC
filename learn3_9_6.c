#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main() {
    int m, n;
    printf("Enter m,n;");
    scanf("%d%d", &m, &n);
        while (m != n)
        {
            while (m > n) m = m - n;
            while (n > m) n = n - m;
        }
    printf("m=%d\n", m);
    system("pause");
    return 0;
}