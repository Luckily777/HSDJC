#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;


int main()
{
int a = 1, b = 0, c = -1, d = 0;
d = ++a || ++b && ++c;
cout << d << endl;

system("pause");
return 0;
}