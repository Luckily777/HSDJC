#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <iostream>
using namespace std;

class cla {
    static int n;
public:
    cla() { n++; }
    ~cla() { n--; }
    static int get_n() { return n; }
};
int cla::n = 0;

int main() {
    cla* p = new cla;
    delete p;
    cout << "n=" << cla::get_n() << endl;
    system("pause");
    return 0;
}