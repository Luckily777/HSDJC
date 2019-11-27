#include <stdio.h>
#include <stdlib.h>

int main(){
	char a, b, c;
	char temp;
	scanf("%c%c%c", &a, &b, &c);
	if (a > b){
		temp = a;
		a = b;
		b = temp;
	}
	if (a > c){
		temp = a;
		a = c;
		c = temp;
	}
	if (b > c){
		temp = b;
		b = c;
		c = temp;
	}
	printf("%c %c %c\n", a, b, c);
	system("pause");
	return 0;
}