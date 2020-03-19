#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//#include <iostream>
//using namespace std;

void f(int a[], int i, int j)

{

    int t;

        if (i < j) { t = a[i]; a[i] = a[j]; a[j] = t; f(a, i + 1, j - 1); }

}


int main() {
    /*int i, a[5] = { 1,2,3,4,5 };

    f(a, 0, 4);

    for (i = 0; i < 5; i++) printf("%d, ", a[i]);*/

    int i = 0; 
    int a = i++; 
    int b = ++a; 
    int c = a + b;
    printf("%d", a?b:c);
    system("pause");
    return 0;
}