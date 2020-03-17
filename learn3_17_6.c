#include <stdio.h>
#include <stdlib.h>
//#include <iostream>
//using namespace std;


int main() {
    int a = 1, b = 2, m = 0, n = 0, k;

    k = (n = b < a) && (m = a);
    printf("%d,%d\n", k, m);
    system("pause");
    return 0;
}