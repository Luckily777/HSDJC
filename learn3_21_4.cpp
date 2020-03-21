#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

//class A
//{
//public:
//    void foo()
//    {
//        printf("1");
//    }
//    virtual void fun()
//    {
//        printf("2");
//    }
//};
//class B : public A
//{
//public:
//    void foo()
//    {
//        printf("3");
//    }
//    void fun()
//    {
//        printf("4");
//    }
//};

class A
{
    float* p;  int n;
public:
    A(int s) { n = s;  p = new float[n]; }
    ~A() { delete p; }
    int Getn() const
    {
        return n;
    }
    float& operator[](int i)
    {
        return *(p+i);
    }
    void Print()
    {
        int i;
        for (i = 0; i < this->Getn(); i++)
        {
            cout << p[i];
        }
    }
};

int main()
{
    //A a;
    //B b;
    //A* p = &a;
    //p->foo();
    //p->fun();
    //p = &b;
    //p->foo();
    //p->fun();
    //A* ptr = (A*)&b;
    //ptr->foo();
    //ptr->fun();



    A a(5);
    for (int i = 0; i < a.Getn(); i++)
        a[i] = i + 1;
    a.Print();
	system("pause");
	return 0;
}