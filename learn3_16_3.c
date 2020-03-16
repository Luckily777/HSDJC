#include <stdio.h>
#include <stdlib.h>
//#include <iostream>
//using namespace std;



int main() {
    char a[5][10] = { "one", "two", "three", "four", "five" };
    int i, j;
    char t;
    for (i = 0; i < 2; i++) {
        for (j = i + 1; j < 5; j++) {
            if (a[i][0] > a[j][0])
            {
                t = a[i][0];
                a[i][0] = a[j][0];
                a[j][0] = t;
            }
        }
    }
    puts(a[1]);
    system("pause");
    return 0;
}