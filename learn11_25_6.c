#include <stdio.h>

int main(){

	int n;
	int a; 
	int b;
	int c;
	scanf("%d%d%d", &a, &b, &c);
	for (n = 10; n <= 100; n++){
		if (n % 3 == a&&n % 5 == b&&n % 7 == c){
			printf("%d\n", n);
			break;
		}
	}
	if (n == 101)
		printf("No answer!\n");
	return 0;
}