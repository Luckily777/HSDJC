#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
//´íÎóµØ³ÌÐò

class parent
{
public:
    virtual void output();
};
void parent::output()
{
    printf("parent!");
}

class son : public parent
{
public:
    virtual void output();
};
void son::output()
{
    printf("son!");
}

int main() {
    son s;
    memset(&s, 0, sizeof(s));
    parent& p = s;
    p.output();
    system("pause");
    return 0;
}