#include <stdio.h>
#include <stdlib.h>


void fun(int *pl, int *p2, int *s)
{
	s £½(int*) malloc(sizeof(int));
	*s £½ *pl + *(p2++);
}
int main(int argc, char* argv[])
{
	int a[2]£½{ l, 2 }, b[2] £½ £û10, 20£ý, *s £½ a;
	fun(a, b, s);
	printf("%d \n", *s);
	system("pause");//´ð°¸ÊÇ1
	return 0;
}