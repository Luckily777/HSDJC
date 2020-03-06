#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;


double power(double x, int n)
{
	double val = 1.0;
	while (n--)  val *= x;
	return(val);
}


int main() {
	 int  i;
	int  value = 0;
	char ch;
	for (i = 7; i >= 0; i--)
	{
		cin >> ch;
		if (ch=='1')
			value += power(2, i);
	}
	cout << value << endl;
	system("pause");
	return 0;
}