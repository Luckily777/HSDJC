#include <stdio.h>
#include <stdlib.h>

int CountNum(int n){

	int count = 0;
	while (n){
		n&=n - 1;//n和n-1进行与运算
		count++;
	}
	return count;
}

int main(){

	printf("%d", CountNum(1023));
	system("pause");
	return 0;
}