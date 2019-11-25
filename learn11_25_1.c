#include <stdio.h>
#include <stdlib.h>

int DigitSum(int n){
	int i,sum=0;
	for (i = n; i; i /= 10){//数字遍历，将每一位数计算出来
		sum += i % 10;
	}
	return sum;
}

int main(){
	printf("%d", DigitSum(1279));
	system("pause");
	return 0;
}