#include <stdio.h>
#include <stdlib.h>

int DigitSum(int n){
	int i,sum=0;
	for (i = n; i; i /= 10){//���ֱ�������ÿһλ���������
		sum += i % 10;
	}
	return sum;
}

int main(){
	printf("%d", DigitSum(1279));
	system("pause");
	return 0;
}