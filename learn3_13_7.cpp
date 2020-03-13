#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int main() {
    char str1[] = "hello world";
    char str2[] = "hello world";

    const char str3[] = "hello world";
    const char str4[] = "hello world";

    const char* pstring1 = "hello world";
    const char* pstring2 = "hello world";

    cout << boolalpha << (str1 == str2) << ',';
    cout << boolalpha << (str3 == str4) << ',';
    cout << boolalpha << (pstring1 == pstring2) << endl;
	system("pause");
	return 0;
}