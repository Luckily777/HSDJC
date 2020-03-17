#include <stdio.h>
#include <stdlib.h>
//#include <iostream>
//using namespace std;

void Func(char str_arg[100])
{
    printf("%d\n", sizeof(str_arg));
}

int main() {
    char str[] = "Hello";
    printf("%d\n", sizeof(str));
    printf("%d\n", strlen(str));
    char* p = str;
    printf("%d\n", sizeof(p));
    Func(str);
    system("pause");
    return 0;
}