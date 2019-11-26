#include <stdio.h>
#include <stdlib.h>

int PrintfNum(int n){
	if (n <= 0){
		return;
	}
	PrintfNum(n / 10);//ตÝน้
	printf("%d ", n % 10);
}

int main(){
	int n;
	PrintfNum(1234);
	system("pause");
	return 0;
}