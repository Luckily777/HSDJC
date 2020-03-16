#include <stdio.h>
#include <stdlib.h>
//#include <iostream>
//using namespace std;

int func(int i)
{
    if (i > 1)
        return i * func(i - 1);
    else
        return 1;
}

int main() {
    printf("%d\n",func(5));
    system("pause");
    return 0;
}