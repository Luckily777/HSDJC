#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
	double a, b, c, d;
	double x, x1, x2;
	printf("���a��b��c���и�ֵ:\n");
	scanf("%lf%lf%lf", &a, &b, &c);
	{
		d = (b*b) - (4.0*a*c);//���������
		if (d > 0){
			x1 = (-b + sqrt(d)) / (2 * a);
			x2 = (-b - sqrt(d)) / (2 * a);
			printf("����������ͬ��ʵ������x1=%7.2f/nx2=%7.2f/n", x1, x2);
		}
		if (d = 0){
			x1 = x2 = -b / (2 * a);
			printf("����������ȵ�ʵ������x1=x2=%7.2f\n", x1);
		}
		if (d < 0){
			printf("��ʵ����\n");
		}
	}
	system("pause");
	return 0;
}