#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int num[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
	int sum1 = 0;
	int sum2 = 0;
	int sum3 = 0;
	int i, k, j;
	for (i = 0; i < 3; i++){
		for (j = i + 1; j < 3; j++){
			for(k = j + 1; k < 3; k++){
				sum1 = num[0][i] + num[1][j] + num[2][k];
			}
			if (i == 1 && j == 2){
				k = 0;
				sum2 = num[0][i] + num[1][j] + num[2][k];
			}
		}
		if (i == 2){
			j = 0;
			k = 1;
			sum3 = num[0][i] + num[1][j] + num[2][k];
		}
	}
	printf("sum1=%d\nsum2=%d\nsum3=%d\n",sum1,sum2,sum3);
	system("pause");
	return 0;

}