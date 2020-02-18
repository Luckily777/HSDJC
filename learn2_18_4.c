#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//


int main(){
	int x;
	scanf("%d", &x);
	if (x-- < 5)printf("%d", x);
	else printf("%d", x++);
	system("pause");
	return 0;
}