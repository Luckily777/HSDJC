#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a = 0, b = 0, c = 0, d;
	c = (a + = b, , b + = a);//���ܹ�������˸�ֵ
		d = c; 
		; 
		; printf("%d,%d,%d\n", a, b, c); 
	system("pause");
}