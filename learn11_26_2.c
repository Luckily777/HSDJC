#include <stdio.h>
#include <stdlib.h>

void PrintfNum(int n, int r){
	if (n <= 0){
		return;
	}
	if (r < 10){
		PrintfNum(n / r, r);
		printf("%d", n%r);
	}
	if (16 >= r&&r>=10){
		PrintfNum(n / r, r);
		putchar("0123456789ABCDEF"[n%r]);
	}


}

int main(){
	int n, r;
	scanf("%d%d", &n, &r);
	PrintfNum(n, r);
	system("pause");
	return 0;
}