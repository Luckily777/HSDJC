#include <stdio.h>
#include <stdlib.h>

int Sum(int n){
	if (n <= 2){
		return 1;
	}
	return Sum(n-1)+Sum(n-2);
}

int main(){
	printf("%d",Sum(6));
	system("pause");
	return 0;
}