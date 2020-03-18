#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//#include <iostream>
//using namespace std;


int func(int x) {
    int count = 0;
    while (x)
    {
        count++;
        x = x & (x - 1);//”Î‘ÀÀ„
    }
    return count;
}

//#pragma pack(4)
//
//struct One {
//    double d;
//    char c;
//    int i;
//};
//
//struct Two {
//    char c;
//    double d;
//    int i;
//};

#pragma pack(8)

struct One {
    double d;
    char c;
    int i;
};

struct Two {
    char c;
    double d;
    int i;
};


int main() {
    /*printf("%d", func(9999));*/

    //printf("%d\n", sizeof(struct One));16
    //printf("%d\n", sizeof(struct Two));16

    printf("%d\n", sizeof(struct One));
    printf("%d\n", sizeof(struct Two));

    system("pause");
    return 0;
}