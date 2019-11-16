#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
	double a, b, c, d;
	double x, x1, x2;
	printf("请给a，b，c进行赋值:\n");
	scanf("%lf%lf%lf", &a, &b, &c);
	{
		d = (b*b) - (4.0*a*c);//定义黛儿塔
		if (d > 0){
			x1 = (-b + sqrt(d)) / (2 * a);
			x2 = (-b - sqrt(d)) / (2 * a);
			printf("存在两个不同的实数根：x1=%7.2f/nx2=%7.2f/n", x1, x2);
		}
		if (d = 0){
			x1 = x2 = -b / (2 * a);
			printf("存在两个相等的实数根：x1=x2=%7.2f\n", x1);
		}
		if (d < 0){
			printf("无实数根\n");
		}
	}
	system("pause");
	return 0;
}