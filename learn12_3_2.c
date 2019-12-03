#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
	long int i, x, y;
	for (i = 1; i < 10000; i++){
		x = sqrt(i + 100);
		y = sqrt(i + 268);
		if (x*x == i + 100 && y*y == i + 268){
			printf("%d\n", i);
		}
	}
	system("pause");
	return 0;
}