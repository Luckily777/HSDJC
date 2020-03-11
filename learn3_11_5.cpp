#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;


int main() {
    bool first = true;
    int sum = 0;
    int value;
    unsigned short i = 0xFFFF;
    for (; i >= 0; --i)
    {
        if (first)
        {
            value = 65536;
            sum += value % 3;
            first = false;
        }
        else {
            sum += --value % 3;
            if (value <= 0)
            {
                cout << sum << "," << i;
                break;
            }
        }
    }
    system("pause");
    return 0;
}