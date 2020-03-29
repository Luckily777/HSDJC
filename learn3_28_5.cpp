#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <iostream>
using namespace std;

    class A
    {
    public:
        int fun1();
        virtual void fun2();
    private:
        int _a;
    };

int main(int argc,int* argv[]) {
    //printf("%d\n",sizeof(A));

    //2. 
    int a[2][5] = { {2,3,4,5,6},{7,8,9,10,11} };
    int* ptr = (int*)(&a + 1);
    cout << *(ptr - 3) << endl;
    system("pause");
    return 0;
}