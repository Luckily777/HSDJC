#include <stdio.h>
#include <stdlib.h>

int main(){
	char c1, c2;
	c1 = getchar();//��ȡ������
	c2 = c1 + 32;//��Сдת����
	putchar(c2);
	putchar('\n');
	system("pause");
	return 0;
}