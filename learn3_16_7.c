#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//#include <iostream>
//using namespace std;


int main() {
    int i = 10, j = 0;
    do
    {
        j = j + i; i--;
    } while (i > 2);

    printf("% d\n", j);
    system("pause");
    return 0;
}