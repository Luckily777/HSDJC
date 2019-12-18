#include <stdio.h>
#include <stdlib.h>

int main(){
	int num[4] = { 2, 7, 11, 13 };
	int trage = 9;
	int temp = 0;
	int i;
	for (i = 0; i < 4; i++){
		for (int j = i + 1; j < 4; j++){
			temp = num[i] + num[j];
			if (temp == trage){
				printf("%d %d", i, j);
			}
		}
	}
	system("pause");
	return 0;
}