#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n = 9;
	float *pFloat = (float*)&n;
	*pFloat = 9.0;
	printf("num��ֵΪ��%d\n", n);
	printf("*pFloat��ֵΪ��%f\n", *pFloat);
	system("pause");
	return 0;

}