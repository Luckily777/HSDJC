#include <stdio.h>
#include <stdlib.h>
//结构体的内存对齐

struct S1
{
	char c1;
	int i;
	char c2;

};//12

struct S2
{
	char c1;
	char c2;
	int i;

};//8


struct S3
{
	double d;
	char c;
	int i;

};//16

struct S4
{
	char c1;
    struct S3 s3;
	double d;

};

int main()
{
	printf("%d\n", sizeof(struct S2));
	printf("%d\n", sizeof(struct S1));
	system("pause");
	return 0;
}