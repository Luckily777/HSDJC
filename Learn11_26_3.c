#include <stdio.h>
#include <stdlib.h>

int main(){
	int i,j;
	int n;
	int k = 2;
	int str[32] = { 0 };
	scanf("%d", &n);
	for (i = 0; i < n; i++){
		scanf("%d",str+ i);
	}
	for (i = 0; i < n; i++){
		for (j = i + 1; j < n; j++){
			printf("%d\n", str[i] + str[j]);
		}
	}
	system("pause");
	return 0;

}