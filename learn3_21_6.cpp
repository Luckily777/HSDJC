#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

class TestClass {
    char x;
public:
    TestClass() { cout << 'A'; }
    TestClass(char c) { cout << c; }
    ~TestClass() { cout << 'B'; }
};


int func()
{
    int i, j, k = 0;
    for (i = 0, j = -1; j = 0; i++, j++)
    {
        k++;
    }
    return k;
}

int main()
{
    /*TestClass p1, * p2;
    p2 = new TestClass('X');
    delete p2;*/

    cout << (func());
    system("pause");
    return 0;
}