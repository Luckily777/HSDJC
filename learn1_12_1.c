#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n = 9;
	float *pFloat = (float*)&n;
	printf("n��ֵΪ��%d\n", n);
	printf("*pFloat��ֵΪ%f\n", *pFloat);
	system("pause");
	return 0;

}