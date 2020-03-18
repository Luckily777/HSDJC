#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//#include <iostream>
//using namespace std;


int main() {
    //1.
    /*int x = 5, y = 6;
    printf("%d", x++ * --y);*/


    //2. 
    /*int i = 0,j=0;
    do
    {
        i++;
        j++;
    } while (i < 10);
    printf("%d", j);*/
    
    //3. 
    int x = 10, y = 20, z = 30;
    if (x > y)
        z = x; 
    x = y; y = z;
    printf("%d %d %d\n", x, y, z);
    system("pause");
    return 0;
}