#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//ʵ������x����������ȡ������i�У�С������ȡ������f��
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