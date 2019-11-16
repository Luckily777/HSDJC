#include <stdio.h>
#include <stdlib.h>

int main(){
	char c1, c2;
	c1 = getchar();//获取变量；
	c2 = c1 + 32;//大小写转换；
	putchar(c2);
	putchar('\n');
	system("pause");
	return 0;
}