#include <stdio.h>
#include <stdlib.h>


void fun(int *pl, int *p2, int *s)
{
	s ��(int*) malloc(sizeof(int));
	*s �� *pl + *(p2++);
}
int main(int argc, char* argv[])
{
	int a[2]��{ l, 2 }, b[2] �� ��10, 20��, *s �� a;
	fun(a, b, s);
	printf("%d \n", *s);
	system("pause");//����1
	return 0;
}