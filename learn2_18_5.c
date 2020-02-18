#include <stdio.h>
#include <stdlib.h>

//


int main(){
	int a = 1; int b = 2;
	for (; a<8; a++) { b += a; a += 2; }
	printf("%d£¬%d\n", a, b);
	system("pause");
	return 0;
}