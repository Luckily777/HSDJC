#include <stdio.h>
#include <stdlib.h>
//#include <iostream>
//using namespace std;

void GetMemory(char** p, int num)
{
    *p = (char*)malloc(num);
}

int main() {
    /*char a[7] = "abcde"; 
    char b[4] = "ABC";
    strcpy(a, b); 
    printf("%c", a[4]);*/
    char* str = NULL;
    GetMemory(&str, 100);
    strcpy(str, "hello");
    printf(str);
    system("pause");
    return 0;
}