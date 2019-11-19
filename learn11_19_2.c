#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char s[100];
	printf("enter a string:\n");
	gets(s);
	int i, j, n;
	n = strlen(s);
	for (i = 0, j = n - 1; i < j; i++, j--){
		if (s[i] != s[j]){//判断第一位和最后一位是否相等
			break;
		}	
	}
	if (i>j){//当全面相等的话 ，则判定位回文数；
			printf("This is a huiwen string.\n");
		}
		else{
			printf("This not is a huiwen string.\n");
		}
	system("pause");
	return 0;

}