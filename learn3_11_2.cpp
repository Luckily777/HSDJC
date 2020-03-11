#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

class A
{
public:
    int fun1();
    virtual void fun2();
private:
    int _a1;
    static int _a2;
};
class B : public A
{
public:
    virtual void fun2();
};
int main() {
 
    printf("%d", sizeof(B));
    system("pause");
    return 0;
}