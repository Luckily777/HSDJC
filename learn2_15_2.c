#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//实型数据x的整数部分取出存于i中，小数部分取出存于f中
void s(float x, int *i, float*f)
{
	*i = (int)(x);
	*f = x - *i;
}

int main(){
	int i;
	float x, f;
	scanf("%f", &x);
	s(x, &i, &f);
	printf("%d %.1f", i, f);
	system("pause");
	return 0;
}