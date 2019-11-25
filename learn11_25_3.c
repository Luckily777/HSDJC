#include <stdio.h>
#include <stdlib.h>

void PrintfNum(int n){
	while (n == 0){
		return ;
	}
	PrintfNum(n / 10);//ตÝน้
	printf("%d ", n % 10);

}

int main(){
	int n;
	scanf("%d", &n);
	PrintfNum(n);
	system("pause");
	return 0;
}
