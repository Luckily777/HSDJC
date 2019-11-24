#include <stdio.h>
#include <stdlib.h>

int Pow(int n,int k){
	if (k <= 1){
		return n;
	}
	return (n*Pow(n,k-1));
}

int main(){
	printf("%d", Pow(6,3));
	system("pause");
	return 0;
}