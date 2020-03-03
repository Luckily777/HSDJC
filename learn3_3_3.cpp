#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;


int main() {
int   a = 14, b = 15,x;

char c = ' A ';
    x = (a && b) && (c < ' B ');
    printf("\n",x);
    system("pause");
    return 0;
}