#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//2 
#define f(x) x*x

//3
void F(char** p){
    *p += 2;
}


int main() {
    //1.
 /*   char* ptr;
    char arr[] = "12345678";
    ptr = arr;
    ptr += 5;
    printf("%s", ptr);*/

    //2.
    //int a = 6, b = 2, c;
    //c = f(a) / f(b);
    //printf("%d", c);

    //3.
    char* a[] = { "123","abc","456" }, ** p;
    p = a;
    F(p);
    printf("%s\r\n", *p);

    system("pause");
    return 0;
}