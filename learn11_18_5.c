#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, j;
	int a[7][7];
	for (i = 0; i <= 6; i++){
		a[i][i] = 1;//将为1的数位，先全部输出；
		a[i][0] = 1;
	}
	for (i = 2; i <= 6; i++){
		for (j = 1; j <= i - 1; j++){
			a[i][j] = a[i - 1][j] + a[i - 1][j - 1];//将不为1的数位输出
		}
	}
	for (i = 0; i <= 6; i++){
		for (j = 0; j <= i; j++){
			printf("%4d",a[i][j]);
		}	
		printf("\n");
	}
	system("pause");
	return 0;
}