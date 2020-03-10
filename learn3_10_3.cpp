#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <bits.h>
using namespace std;

int solve(int x) {
    if (x == 0 || x == 1) {
        return x;
    }
    if (x % 2 == 0) {
        return 1 + solve(x / 2);
    }
    else {
        return 1 + solve((x + 1) / 2);
    }
}

int main() {
    int n = 100;
    int ans = solve(n);
    cout << ans << endl;
    system("pause");
    return 0;
}