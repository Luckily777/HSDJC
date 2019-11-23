#include <stdio.h>
#include <stdlib.h>

struct Student
{
	int num;
	float score;
	struct Student *next;
};

int main(){
	struct Student a, b, c, *head, *p;
	a.num = 10101; a.score = 89.5;
	b.num = 10103; a.score = 90;
	c.num = 10108; c.score = 85;
	head = &a;
	a.next = &b;
	b.next = &c;
	c.next = NULL;
	p = head;
	do
	{
		printf("%ld %5.1f\n", p->num, p->score);//p指向的结点数据
		p = p->next;
	} while (p != NULL);
	system("pause");
	return 0;
}