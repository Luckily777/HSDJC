#include <stdio.h>
#include <stdlib.h>
#include <iostream>

#define A(x) x+x
using namespace std;

int main(){
	int i = 5 * A(4)*A(6);
	cout << i;
	system("pause");
	return 0;
}