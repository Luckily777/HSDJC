#include <stdio.h>
#include <stdlib.h>

int main(){
	char c1, c2;
	c1 = getchar();//��ȡ������
	c2=(c1 >='A' && c1 <='Z')?(c1+32):c1;//��Сдת����
	putchar(c2);
	putchar('\n');
	system("pause");
	return 0;
}