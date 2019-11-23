#include <stdio.h>
#include <stdio.h>

void average(float *p, int n){
	float *p_end;
	float sum = 0, aver;
	p_end = p + n - 1;
	for (; p <= p_end; p++){
		sum = sum + (*p);
	}
		aver = sum / n;
		printf("average=%5.2f\n",aver);

}

void search(float(*p)[4], int n){
	int i;
	printf("The score of No.%d are:\n");
	for (i = 0; i < 4; i++){
		printf("%5.2f", *(*(p + n) + i));
	}
	printf("\n");
}

int main(){
	float socre[3][4] = { { 65, 67, 70, 60 }, { 80, 87, 90, 81 }, { 90, 99, 100, 98 } };
	average(*socre, 12);
	search(socre, 2);
	system("pause");
	return 0;
}