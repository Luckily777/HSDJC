#include <stdio.h>
#include <stdlib.h>

//转换是从int向unsign int转变
//unsign char的范围

int main() {
	//1
	//int a = -20;
	//unsigned int b = 10;
	//printf("%d\n", a + b);

	//2
	//unsigned int 
	//unsigned int i;
	//for (i = 9; i >= 0; i--) {
	//	printf("%u\n", i);
	//}

	//3
	/*char a[1000];
	int i;
	for (int i = 0; i <1000; i++) {
		a[i] = -1 - i;

	}
		printf("%u\n", strlen(a));*/

	//4  unsigned char [0,255] 恒小于等于255
	unsigned char i = 0;
	for (i = 0; i <= 255; i++) {
		printf("hehe\n");
	}
	system("pause");
	return 0;
}