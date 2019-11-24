#include <stdio.h>
#include <stdlib.h>

int CountNum(int n){

	int count = 0;
	int i;
	for (i = n; i; i /= 2){//转换为二进制，计算其中1的个数！
		count += i % 2;
	}
	return count;
}

int main(){

	printf("%d", CountNum(1024));
	system("pause");
	return 0;
}