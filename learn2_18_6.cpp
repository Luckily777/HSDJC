#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
//

int main(){
	char str[] = "glad to test something";
	char *p = str;
	p++;
	int *p1 = reinterpret_cast<int *>(p);
	p1++;
	p = reinterpret_cast<char *>(p1);
	printf("result is %s\n", p);
	system("pause");
	return 0;
}