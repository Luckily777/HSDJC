#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int WhoAml(int num1, int num2) {
    if (num2 == 0) {
        return num1;
    }
    int num = num1 ^ num2;
    int carry = (num1 & num2 )<< 1;
    return WhoAml(num, carry);
}

int main() {
    cout << WhoAml(5, 6) << endl;
    system("pause");
    return 0;
}