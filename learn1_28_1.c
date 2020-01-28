#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a = 0, b = 0, c = 0, d;
	c = (a + = b, , b + = a);//不能够进行如此赋值
		d = c; 
		; 
		; printf("%d,%d,%d\n", a, b, c); 
	system("pause");
}