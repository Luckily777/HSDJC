#include <stdio.h>
#include <stdlib.h>
int lj()
{
	int i;
	double sum = 0;
	double temp = 0;
	int sign = 1;
	for (i = 1; i <= 100;i++)
	{
		temp = sign * 1.0 / i;//�µ�����
		sign *= -1;//�ı���ϵ�������
    	sum = sum + temp;
    }
	printf("sum=��%.4lf\n", sum);
	system("pause");
	return 0;
}