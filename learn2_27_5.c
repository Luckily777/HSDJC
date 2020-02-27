#include <stdio.h>
#include <stdlib.h>
// 联合共用体 谁大就以谁的空间为准

union Un {
	char c;
	int i;
};
union Um {
	char c[5];
	int i;
};



int main() {

	//大小端机
	union Un u;
	u.i = 1;
	if (u.c == 1)
	{
		printf("小端机");
	}
	else
	{
		printf("大端机");
	}

	//取最大的类型的大小
	printf("%d\n", sizeof(union Un));

	// 都是取首地址
	printf("%x\n", &(u.c));
	printf("%x\n", &(u.i));

	// 内存的放置 55 33 22 11
	u.i = 0x11223344;
	u.c = 0x55;
	printf("%x\n", u.i);

	// 实际大小
	printf("%d\n", sizeof(union Um));


	system("pause");
	return 0;
}