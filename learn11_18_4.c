#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	int i, j,k;
	char c[200], c1;
	printf("Enter a string :\n");
	scanf("%s", c);
	k = strlen(c);//求字数串长度；
	for (i = 0, j = k - 1; i < j; i++, j--){
		c1 = c[i];
		c[i] = c[j];
		c[j] = c1;
	}
	printf("%s", c);
	system("pause");
	return 0;
}