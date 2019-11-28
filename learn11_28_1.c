#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int Min(int a, int b){
	int temp = 0;
	if (a == b){
		return a;
	}
	if (a<b){
		temp = a;
		a = b;
		b = temp;
	}

	while (a > b){
		if (a%b == 0){
			return a;
		}
		if (a%b != 0){
			return (a*b);
		}
	}
}

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", Min(a, b));
	system("pause");
	return 0;

}
