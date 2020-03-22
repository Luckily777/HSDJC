#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//#include <iostream>
//using namespace std;

//2.
void point(int* p) {

    *p = p[2];
}


//3. 
int main()
{
    //1.
 /*   int i = 2;
    switch (i)
    {
    case 1: i++;
    case 2: i--;
    case 3: ++i; break;
    case 4: --i;
    default: i++;
    }
    printf("%d", i);*/



    //int c[] = { 1,2,3,4,5 }, * p = c;
    //    point(p + 1);
    //for (; p < c + 5;)
    //    printf("%d",*p++);

    //3.
    int x = 3;
    int y = 5;
    int a, b;
    a = x--;
    b = x * y--;
    printf("%d %d", a,b);
    system("pause");
    return 0;
}