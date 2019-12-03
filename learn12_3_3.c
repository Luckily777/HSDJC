#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(){
	char a = 176, b = 219;
	printf("%c%c%c%c%c\n", b, a, a, a, b);
	printf("%c%c%c%c%c\n", a, b, a, b, b);
	printf("%c%c%c%c%c\n", a, a, b, a, b);
	printf("%c%c%c%c%c\n", a, b, a, b, b);
	printf("%c%c%c%c%c\n", b, a, a, a, b);
	system("pause");
	return 0;
}