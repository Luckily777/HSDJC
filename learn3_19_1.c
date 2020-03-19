#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//#include <iostream>
//using namespace std;




int main() {
    char  ac[] = "Hello World! C Program", * p;

    for (p = ac + 6; p < ac + 9; p++)
    {
        printf("%c", *p);
    }
    system("pause");
    return 0;
}