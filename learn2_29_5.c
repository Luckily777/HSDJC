#include <stdio.h>
#include <stdlib.h>
//柔性数组 如何给柔性数组开空间

typedef struct st_type {
	int i;
	int a[];//柔性数组
}type_a;

int main() {

	//printf("%d\n", sizeof(type_a));
	int i = 0;
	type_a* p = (type_a*)malloc(sizeof(type_a) + 100 * sizeof(int));
	p->i = 100;
	for (i = 0; i < 100; i++)
	{
		p->a[i] = i;
	}
	free(p);
	system("pause");
	return 0;
}