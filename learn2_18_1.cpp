#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
//c++
class A
{
public:
	A()
	{
		printf("0");
	}
	A(int a)
	{
		printf("1");
	}
	A& operator=(const A& a)
	{
		printf("2");
		return*this;
	}
};
int main(){
	A al;
	al = 10;
	system("pause");
	return 0;
}