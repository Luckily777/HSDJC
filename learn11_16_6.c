#include <stdio.h>
#include <stdlib.h>

int main(){
	double r, h;
	double l, S, s, V, v;
	printf("请输入圆的半径r和圆柱的高h:\n");
	scanf("%lf%lf", &r, &h);
	{
		l = 2.0*(3.14)*r;//周长的计算；
		S = (3.14)*r*r;//。。。
		s = 4.0*(3.14)*r*r;
		V = (4.0 / 3.0)*(3.14)*r*r*r;
		v = S*h;
	}
	printf("圆的周长为%f\n圆的面积%f\n球的面积%f\n球的体积%f\n圆柱的体积%f\n",l,S,s,V,v);
	system("pause");
	return 0;
}