#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int main(){
	double a, b, c, s, area;
	a = 3.67;
	b = 5.43;
	c = 6.21;
	s = (a + b + c) / 2;
	area = sqrt(s*(s - a)*(s - b)*(s - c));
	printf("a=%f\nb=%f\nc=%f\n", a, b, c);
	printf("area=%f\n", area);
	system("pause");
	return 0;
}