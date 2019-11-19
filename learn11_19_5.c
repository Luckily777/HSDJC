#include <stdio.h>
#include <stdlib.h>

double countpi(double eps){
	int m = 1;
	double temp = 1.0, s = 0;
	while (temp >= eps){
		s += temp;
		temp = (temp*m) / ((m * 2) + 1);
		m++;
	}
	return (2 * s);
}

int main(){
	FILE *fp;
	double eps = 1e-5, pi;
	if ((fp = fopen("p7_5.out", "w")) == NULL){
		printf("can not open the file!\n");
		exit(0);
	}
	pi = countpi(eps);
	printf("pi=%lf\n", pi);//��ӡ������
	fprintf(fp,"pi=%lf\n", pi);//������ļ�֮�У�
	fclose(fp);//�ر��ļ���
	system("pause");
	return 0;
}