#include <stdio.h>
#include <stdlib.h>
//16进制c396和8进制数值6447的异或
int main(){
	int a;
	a= 0xC396;
	int b;
	b=064474;
	int c;
	c = a^b;
	printf("%d", c);
	system("pause");
	return 0;

}