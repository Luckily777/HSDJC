#include <stdio.h>
#include <stdlib.h>

int main(){
	double r, h;
	double l, S, s, V, v;
	printf("������Բ�İ뾶r��Բ���ĸ�h:\n");
	scanf("%lf%lf", &r, &h);
	{
		l = 2.0*(3.14)*r;//�ܳ��ļ��㣻
		S = (3.14)*r*r;//������
		s = 4.0*(3.14)*r*r;
		V = (4.0 / 3.0)*(3.14)*r*r*r;
		v = S*h;
	}
	printf("Բ���ܳ�Ϊ%f\nԲ�����%f\n������%f\n������%f\nԲ�������%f\n",l,S,s,V,v);
	system("pause");
	return 0;
}