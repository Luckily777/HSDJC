#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char s[200];
	char a;
	printf("Enter a string.\n");
	gets(s);
	printf("Enter a charater.\n");
	a = getchar();
	int i,j;
	for (i = j = 0; s[i] != '\0'; i++){
		if (s[i] != a){
			s[j++] = s[i];	//将不同的取出来放进新的字符串之中；
		}
	}	
	if (s[i] == '\0'){//将之后重复的最后一位删除掉；
			s[j] = s[i];
		}
	printf("%s\n", s);
	system("pause");
	return 0;
}