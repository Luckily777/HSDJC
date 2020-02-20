#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char *p = "abcdef";
	printf("%d\n", sizeof(p));//4
	printf("%d\n", sizeof(p + 0));//4
	printf("%d\n", sizeof(*p));//1
	printf("%d\n", sizeof(p[0]));//1
	printf("%d\n", sizeof(&p));//4 char**
	printf("%d\n", sizeof(&p + 1));//4
	printf("%d\n", sizeof(&p[0] + 1));//4 &p[0]==p  char*

	printf("%d\n", strlen(p));//6
	printf("%d\n", strlen(p + 1));//5
	printf("%d\n", strlen(*p));//x  char 
	printf("%d\n", strlen(p[0]));//x  char 
	printf("%d\n", strlen(&p));//x   
	printf("%d\n", strlen(&p + 1));//x  char **
	printf("%d\n", strlen(&p[0] + 1));//5
	system("pause");
	return 0;
}