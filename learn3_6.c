#include <stdio.h>
#include <stdlib.h>
int main()
{
	double p0 = 1000, r1 = 0.0036, r2 = 0.0225, r3 = 0.0198, p1, p2, p3;
	p1 = p0*(1 + r1);//��һ�����Ϣ�ͱ����
	p2 = p0*(1 + r2);//�ڶ������Ϣ�ͱ����
	p3 = p0*(1 + (r3)/2)*(1+(r3)/2);//�����������Ϣ�ͱ����
	printf("p1=%f\np2=%f\np3=%f\n", p1, p2, p3);
		system("pause");
	return 0;
}