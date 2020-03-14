#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
// 联合体 ip
//#include <iostream>
//using namespace std;

union IP {
    unsigned int data;
    struct {
        unsigned char a;
        unsigned char b;
        unsigned char c;
        unsigned char d;

    }ip_str;
};

int main() {
    //点分十进制 进行ip
    union IP ip;
    ip.ip_str.a = 123;
    ip.ip_str.a = 139;
    ip.ip_str.a = 73;
    ip.ip_str.a = 101;
    printf("%u\n", ip.data);

    system("pause");
    return 0;
}