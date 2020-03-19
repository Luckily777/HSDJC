#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//#include <iostream>
//using namespace std;

#define N 2
#define M N+1
#define NUM (M+1)*M/2

int func(int a) {
    int b;
    switch (a) {
    case 1:b = 100;
    case 2:b = 200;
    case 3:b = 250;
    default:b = 0;
    }
    return b;
}

int main() {
    //printf("%d",func(1));

    printf("%d\n", NUM);
    system("pause");
    return 0;
}