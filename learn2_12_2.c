#include <stdio.h>
#include <stdlib.h>
//所打印出来的是c的地址
int main(){
	char *s = "abcde";
	s += 2;
	printf("%d", s);
	system("pause");
	return 0;

}