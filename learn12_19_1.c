#include <stdio.h>
#include <stdlib.h>

#define NULL 0

struct student{
	int num;
	char *name;
	int age;
	struct student *next;
};

void main(){

	struct student a, b, c, *head, *p;
	a.num = 1001; a.name = "lihua"; a.age = 18; /* �Խ���Ա���и�ֵ */
	b.num = 1002; b.name = "liuxing"; b.age = 19;
	c.num = 1003; c.name = "huangke"; c.age = 18;
	head = &a; /* ��������aΪͷ��� */
	a.next = &b;
	b.next = &c;
	c.next = NULL;
	p = head; /* ������� */
	do{
		printf("%5d,%s,%3d\n", p->num, p->name, p->age);
		p = p->next;
	} while (p != NULL);
	system("pause");
}