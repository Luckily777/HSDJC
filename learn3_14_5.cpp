#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

class B;
class A
{
    friend class B;
public:
    void Display()
    {
        cout << x << endl;
    }
private:
    int x;
};
class B
{
public:
    void Set(int i) { a.x= i; }
    void Display() { a.Display(); }
private:
    A a;
};

int main() {
    B b;
    b.Set(1);
    b.Display();
    system("pause");
    return 0;
}