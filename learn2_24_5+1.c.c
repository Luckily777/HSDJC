#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include <stdio.h>
#include <stdlib.h>

struct STU
{
	char name[10];
	int num;
};
void f(char*name, int num)// name[]  р╡©ирт
{
	struct STU s[2] = { { "SS", 10001 }, { "PP", 10002 } };
	num = s[1].num;
	strcpy(name, s[1].name);
}
int main()
{
	struct STU  s[2] = { { "YY", 10003 }, { "LL", 10004 } }, *p;
	p = s;
	f(p->name, p->num);
	printf("%s %d\n", p->name, p->num);
	system("pause");
	return 0;
}