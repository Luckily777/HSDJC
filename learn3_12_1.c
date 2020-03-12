#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//#include <iostream>
//using namespace std;
int cnt = 0;

int x(int n) {

    cnt++;
    if (n <= 3)
    {
        return 1;
    }
    else
    {
        return x(n - 2) + x(n - 4) + 1;
    }

}
int main() {
    x(x(8));
    printf("%d", cnt);
    system("pause");
    return 0;
}