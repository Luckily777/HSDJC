#include <stdio.h>
#include <stdlib.h>

int Jiecheng(int n){
	int sum = 0;
	if (n == 1){
		return 1;
	}
	sum=n*Jiecheng(n - 1);
	return sum;
}

int main(){
	printf("%d", Jiecheng(5));
	system("pause");
	return 0;
}