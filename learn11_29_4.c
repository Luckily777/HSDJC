#include <stdio.h>
#include <stdlib.h>

int main(){
	int i = 0;
	int a = 0, b = 2, c = 3, d = 4;
	i = a++ || ++b || c++ || d++;//或运算，当第一个为真，则后面全部不进行
	printf("a=%d\nb=%d\nc=%d\nd=%d", a, b, c, d);
	system("pause");
	return 0;
}
