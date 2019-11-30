#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
	int n;
	scanf("%d", &n);
	int Sn = 0;
	int i;
	printf("Sn=");
	for (i = 0; i < 4; i++){
		Sn = Sn + n*pow(10, i);
		printf("%d+", Sn);
	}
	if (i == 4){
		Sn = Sn + n*pow(10, 4);
		printf("%d", Sn);
	}
	system("pause");
	return 0;

}