#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
//´íÎó

int main() {
    char* p1 = "123";
    char* p2 = "ABC";
    char str[50] = "xyz"; 
    strcpy(str + 2, strcat(p1, p2));
    cout << str;
    system("pause");
    return 0;
}