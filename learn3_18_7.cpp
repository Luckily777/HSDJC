#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;


class A {
public:
    long a;
};
class B : public A {
public:
    long b;
};
void seta(A* data, int idx) {
    data[idx].a = 2;
}

int main(int argc, char* argv[]) {
    B data[4];
    for (int i = 0; i < 4; ++i) {
        data[i].a = 1;
        data[i].b = 1;
        seta(data, i);
    }
    for (int i = 0; i < 4; ++i) {
        std::cout << data[i].a << data[i].b;
    }
    system("pause");
    return 0;
}