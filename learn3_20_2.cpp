#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

class Base
{
public:
    Base()
    {
        Init();
    }
    virtual void Init()
    {
        printf("Base Init\n");
    }
    void func()
    {
        printf("Base func\n");
    }
};
class Derived : public Base
{
public:
    virtual void Init()
    {
        printf("Derived Init\n");
    }
    void func()
    {
        printf("Derived func\n");
    }
};




int main() {
    //Derived d;
    //((Base*)&d)->func();

    int i = 0, j = 0, n;
    cin >> n;
    for (; n != 0; )
    {
        j++;
        cin >> n;
    }
    if (n = 0) i++;
    cout << i << " " << j << endl;
    system("pause");
    return 0;
}