#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

class A {
public:
    A() { p(); }
    virtual void p() { printf("A"); }
    virtual ~A() { p(); }
};
class B :public A {
public:
    B() { p(); }
    void p() { printf("B"); }
    ~B() { p(); }
};

int main(int, char**) {
    A* a = new B();
    delete a;
    system("pause");
    return 0;
}