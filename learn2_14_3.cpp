#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int fun(int x){
	int count = 0;
	while (x){
		count++;
		x = x &(x - 1);
	}
	return count;
}

int main(){
	cout << "fun(2015)=" << fun(2015) << endl;
	system("pause");
	return 0;
}