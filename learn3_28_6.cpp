#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <iostream>
using namespace std;

class C
{
public:
    C(int a = 0);
    void Show();
private:
    int H;
};
void C::Show()
{
    cout << H << endl;
}
C::C(int a)
{
    H=a;
}

int main() {
    C  m(1);
    m.Show();
    system("pause");
    return 0;
}