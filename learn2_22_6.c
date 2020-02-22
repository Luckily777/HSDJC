#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//


int main(){
	char *p1 = "hello world";
	printf("%d\n", strlen(p1));
	char p2[] = "hello world"; //char p2[] = "hello\\0world";  则长度为12 大小为13
	//p2[5] = '0'; 结果还为11
	//p2[5] = '\0';结果为5 
	printf("%d\n", strlen(p2));//结果也为11 但此数组的大小是12
	printf("%d\n", sizeof(p2));



	system("pause");
	return 0;
}