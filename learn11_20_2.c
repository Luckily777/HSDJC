#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	double sum = 0, sum_down = 0, sum_up = 0, h = 0;
	double i;
	for (i = 0.0; i <= 9.0; i++){
		sum_down =sum_down+ 100*pow(1.0/ 2.0, i);//计算每一次下落的总距离；
	}
	for (i = 1.0; i <= 9.0; i++){
		sum_up = sum_up+100*pow(1.0 / 2.0, i);//计算每一次上升的总距离；
	}
	sum = sum_down + sum_up;//计算总距离；
	h = 100*pow(1.0 / 2.0, 10);//计算第十次弹起来的高度
	printf("在第十次落地，一共经过了%lf米\n", sum);
	printf("第十次再弹起 有%lf米\n.", h);
	system("pause");
	return 0;
}