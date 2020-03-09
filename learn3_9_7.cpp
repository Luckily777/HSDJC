#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

class A {
public:
    virtual void f() { cout << "A::f() "; }
    void f() const { cout << "A::f() const "; }
};
class B : public A {
public:
    void f() { cout << "B::f() "; }
    void f() const { cout << "B::f() const "; }
};
void g(const A* a) {
    a->f();
}

int main(int argc, char* argv[]) {
    A* p = new B();
    p->f();
    g(p);
    delete(p);
    system("pause");
    return 0;
}