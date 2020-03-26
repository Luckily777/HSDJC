#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
//#include <iostream>
//using namespace std;

int f(char x) {
    return x * x % 10;
}

int func(int x, int y)
{
    return (x + y);
}

int main() {
    //1.
    //char a[10] = "abc", b[10] = "012", c[10] = "xyz";
    //strcpy(a + 1, b + 2);
    //puts(strcat(a, c + 1));

    //2.
    //char a;
    //int b = 0;
    //for (a = 0; a < 5; a += 1) {
    //    b = f(a);
    //    printf("%d", b);
    //}

    //3.
    int a = 1, b = 2, c = 3, d = 4, e = 5;
    printf(" %d\n", func((a + b, b + c, c + a), (d, e)));

	system("pause");
	return 0;
}