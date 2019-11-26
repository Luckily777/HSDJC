#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	double d = 0;
	double x1,x2, y1, y2;
	scanf("%lf%lf%lf%lf", &x1, &x2, &y1, &y2);
	d = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
	printf("%.2lf", d);
	system("pause");
	return 0;
}