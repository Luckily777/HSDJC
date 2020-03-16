#include <stdio.h>
#include <stdlib.h>
//#include <iostream>
//using namespace std;

void fun(int* p, int* q) {
    int t;
    t = *p;
    *p = *q;
    *q = t;
    *q = *p;
}


int main() {
    int a=0;
    int b=9;
    fun(&a, &b);
    printf("%d%d\n", a, b);
    system("pause");
    return 0;
}